UPDATE Users
SET city = (SELECT Address
            FROM Customer
            WHERE Customer.Name = Users.FirstName)
WHERE CustomerID > 0;
