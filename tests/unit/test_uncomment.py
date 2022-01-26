from pytsql.tsql import _split


def test_remove_comment_block():
    seed = """
USE master;
/*
Here is a comment we should not see
*/
select * from [master].[dbo].[table];
    """
    expected = """USE master ;
select * from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def test_remove_comment_line():
    seed = """
-- USE master;
select * from [master].[dbo].[table];
"""
    expected = """select * from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def test_remove_trailing_comment():
    seed = """
USE master;
select * -- select everything!
from [master].[dbo].[table];
"""
    expected = """USE master ;
select * from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def test_remove_single_line_block():
    seed = """
USE master;
/* This comment has great intentions. */
select *
from [master].[dbo].[table];"""
    expected = """USE master ;
select * from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def test_single_line_wrapping_blocks():
    seed = """USE master;
/* Start comment */ select * /* End comment */
from [master].[dbo].[table];"""
    expected = """USE master ;
select * from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def test_comments_in_single_quotes():
    seed = """USE master;
select 'foo -- bar /* text */'
from [master].[dbo].[table];"""
    expected = """USE master ;
select 'foo -- bar /* text */' from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def test_comments_in_double_quotes():
    seed = """USE master;
select "foo -- bar /* text */"
from [master].[dbo].[table];"""
    expected = """USE master ;
select "foo -- bar /* text */" from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def test_comments_in_string_literal_with_escaped_single_quote():
    seed = r"""USE master;
select 'foo -- '' bar /* text */'
from [master].[dbo].[table];"""
    expected = r"""USE master ;
select 'foo -- '' bar /* text */' from [master] . [dbo] . [table] ;"""
    assert _process(seed) == expected


def _process(seed):
    return "\n".join(_split(seed))
