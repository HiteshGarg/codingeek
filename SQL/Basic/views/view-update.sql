CREATE VIEW Student_view AS
SELECT Student_Id.ID, student.Name, student.Grade, student.Points
FROM  Student_Id,student;
WHERE student.Age > 13
