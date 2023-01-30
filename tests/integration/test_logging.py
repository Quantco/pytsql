import logging

from pytsql import executes


def test_deactivation_of_logger(engine, caplog):
    logger = logging.getLogger("pytsql")
    logger.disabled = True
    logger.setLevel(logging.DEBUG)

    seed = "PRINT 'test'"
    executes(seed, engine)

    assert len(caplog.records) == 0

    logger.disabled = False
