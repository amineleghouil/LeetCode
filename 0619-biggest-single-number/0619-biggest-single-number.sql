# Write your MySQL query statement below

SELECT MAX(num) as num
FROM mynumbers n
where num IN (
    SELECT num
    FROM mynumbers
    GROUP BY num
    HAVING COUNT(*)=1
)