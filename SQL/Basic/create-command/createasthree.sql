CREATE TABLE multiple
  AS (SELECT Student.id,Grade.name,Student.Total,Grades.Grade
      FROM Student,Grade
      WHERE Student.id = Grade.id
      AND Student.Total > 170);
