# Write your MySQL query statement below
SELECT name AS results
FROM Users
WHERE user_id = (
    SELECT user_id      
    FROM MovieRating JOIN Users USING(user_id)
    GROUP BY user_id
    ORDER BY COUNT(*) DESC, name ASC
    LIMIT 1
)

UNION ALL

SELECT title AS results
FROM Movies 
WHERE movie_id = (
    SELECT movie_id 
    FROM MovieRating JOIN Movies USING(movie_id)
    WHERE created_at BETWEEN "2020-02-01" AND "2020-02-29"
    GROUP BY movie_id
    ORDER BY AVG(rating) DESC, title ASC
    LIMIT 1
)