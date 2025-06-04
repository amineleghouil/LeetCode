# Write your MySQL query statement below
SELECT employee_id, 
       IF( employee_id % 2 != 0 AND LEFT(name, 1) <> 'M', salary, 0) as bonus
FROM Employees
ORDER BY employee_id;