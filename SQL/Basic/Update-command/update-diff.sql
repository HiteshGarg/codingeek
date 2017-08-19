UPDATE Users, Customers
SET Users.contact = Customers.MemberID
WHERE Users.FirstName = Customers.Name;
