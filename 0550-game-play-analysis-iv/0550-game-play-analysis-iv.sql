# Write your MySQL query statement below
SELECT 
    ROUND(
        COUNT(DISTINCT a1.player_id) / 
        (SELECT COUNT(DISTINCT player_id) FROM activity) 
    ,2) 
    AS fraction
FROM 
    (SELECT player_id, MIN(event_date) AS first_login
    FROM activity
    GROUP BY player_id) a1
JOIN activity a2
    ON a1.player_id=a2.player_id
    AND a2.event_date=DATE_ADD(a1.first_login, INTERVAL 1 DAY)