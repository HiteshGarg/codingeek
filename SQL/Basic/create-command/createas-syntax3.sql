-- SYNTAX

CREATE TABLE new_table_name
  AS (
	SELECT table_name.column1,table_name.column2...
      FROM table_name1,table_name2
      WHERE condition
);

-- EXAMPLE

CREATE TABLE multiple
  AS (
	SELECT Student.id,Grade.name,Student.Total,Grades.Grade
      FROM Student,Grade
      WHERE Student.id = Grade.id
      AND Student.Total > 170
);
