CREATE TABLE Average
  AS (SELECT id,name
      FROM Student
      WHERE Total < 170);
