import logging

from pytsql import executes

SQL_PRINT_LOG_TEXT = "SQL PRINT"


def test_evaluations(engine, caplog):
    caplog.set_level(logging.INFO)

    seed = """
    PRINT 'basic text'
    PRINT(10 + 10)
    PRINT('two plus two equals ' + CAST(4 AS VARCHAR))
    """

    executes(seed, engine)

    assert "basic text" in caplog.text
    assert "20" in caplog.text
    assert "two plus two equals 4" in caplog.text
    assert caplog.text.count(SQL_PRINT_LOG_TEXT) == 3


def test_evaluation_in_cf(engine, caplog):
    caplog.set_level(logging.INFO)
    seed = """
    IF 1 = 1
        BEGIN
            PRINT 'text1'
            PRINT 'text2'
            PRINT 'text3'
        END
    """

    executes(seed, engine)

    assert "text1" in caplog.text
    assert "text2" in caplog.text
    assert "text3" in caplog.text
    assert caplog.text.count(SQL_PRINT_LOG_TEXT) == 3


def test_evaluation_in_context(engine, caplog):
    caplog.set_level(logging.INFO)

    seed = """
    DECLARE @A INT = 0
    WHILE @A < 10
        BEGIN
            PRINT @A
            SET @A = @A + 1
        END
    """

    executes(seed, engine)

    for i in range(10):
        assert str(i) in caplog.text
    assert caplog.text.count(SQL_PRINT_LOG_TEXT) == 10


def test_print_unicode(engine, caplog):
    caplog.set_level(logging.INFO)

    unicode_text = "тест"
    seed = f"PRINT N'{unicode_text}'"

    executes(seed, engine)

    assert unicode_text in caplog.text


def test_print_truncation(engine, caplog):
    caplog.set_level(logging.INFO)

    print_text = "a" * 5000
    seed = f"PRINT '{print_text}'"

    executes(seed, engine)

    assert ("a" * 2000) in caplog.text
    assert ("a" * 2001) not in caplog.text


def test_multiple_prints(engine):
    for _ in range(50):
        executes("SELECT 12", engine)
