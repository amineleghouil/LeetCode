# Write your MySQL query statement below
SELECT
     c.name AS Customers 
FROM 
    customers c 
WHERE 
    c.id NOT IN (
        SELECT c.id 
        FROM customers c 
        JOIN orders o ON c.id = o.customerId
    );