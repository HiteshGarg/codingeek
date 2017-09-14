INSERT into employee (Emp_no, Name)
SELECT Emp_no, Name FROM new
WHERE Emp_no > 133 OR Exp > 1;
