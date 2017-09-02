CREATE VIEW view_two AS
SELECT Student_Id.ID, student.Name, student.Grade
FROM  Student_Id,student;
