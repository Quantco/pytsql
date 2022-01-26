import pytest

from pytsql.tsql import _split


# Note, Kevin, 21/12/03
# As of now, there seems to be a problem with this query.
# This is not by design. We would like to succeed this test.
@pytest.mark.xfail
def test_smoke_pivot(engine):
    seed = """
CREATE VIEW my_view AS (
    SELECT myid
           , points_derivative
           , feature1
           , feature2
    FROM (
        SELECT myid
             , points
             , criterion
             , SUM(points) OVER(PARTITION BY myid) points_derivative
        FROM table1
    ) SourceTable
    PIVOT (
        AVG(points)
        FOR criterion IN (
            feature1
          , feature2
        )
    ) PivotTable
)
GO
    """
    _split(seed)
