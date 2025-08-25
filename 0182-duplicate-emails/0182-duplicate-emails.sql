# Write your MySQL query statement below
select Email from Person
Group by Email 
having count(Email)>=2;