-- SYNTAX

CREATE TABLE new_table_name
AS (SELECT * FROM old_table_name
    WHERE condition);

	
-- EXAMPLE

CREATE TABLE Toppers
AS (SELECT * FROM Student
    WHERE Total > 170);
