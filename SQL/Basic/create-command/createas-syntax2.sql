-- SYNTAX

CREATE TABLE new_table_name
  AS (
	SELECT column_name1,column_name2...
      FROM old_table_name
      WHERE condition
);

-- EXAMPLE

CREATE TABLE Average
  AS (SELECT id,name
      FROM Student
      WHERE Total < 170);