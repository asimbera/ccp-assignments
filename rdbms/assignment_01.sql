-- ************************************************
-- Assignment 01                                  *
-- ************************************************

-- Customer master table
create table cust (
    cust_id varchar(3) primary key not null,
    lname varchar(15),
    fname varchar(15),
    area varchar(2),
    phone_no int8
);

-- Insert data into `cust` table
insert into cust values
    ('a01', 'Bayross', 'Ivan', 'sa', '6125467'),
    ('a02', 'Saitwal', 'Vandana', 'mu', '5560379'),
    ('a03', 'Jaguste', 'Pramada', 'da', '4563891'),
    ('a04', 'Navindgi', 'Basu', 'ba', '6125401'),
    ('a05', 'Sreedharan', 'Ravi', 'va', null),
    ('a06', null, 'Rukmini', 'gh', '5125274');

-- Movies master table
create table movie (
    mv_no int2 primary key not null,
    title varchar(25),
    type varchar(10),
    star varchar(25),
    price int
);

-- Insert data into `movie` table
insert into movie values
    (1, 'bloody vengeance', 'action', 'jackie chan', 180.95),
    (2, 'the firm', 'thriller', 'tom cruise', 200.00),
    (3, 'pretty woman', 'romance', 'richard gere', 150.55),
    (4, 'home alone', 'comedy', 'macaulay culkin', 150.00),
    (5, 'the fugitive', 'thriller', 'harisson ford', 200.00),
    (6, 'coma', 'suspense', 'michael douglas', 109.00),
    (7, 'dracula', 'horror', 'gary oldman', 150.25),
    (8, 'quick change', 'comedy', 'bill muray', 100.00),
    (9, 'gone with the wind', 'drama', 'clarke gable', 200.00),
    (10, 'carry on doctor', 'comedy', 'leslie phillips', 100.00);

-- Invoice transaction table
create table invoice (
    inv_no varchar(3) primary key not null,
    mv_no int2,
    cust_id varchar(3),
    issue_date date,
    return_date date
);

-- Insert data into `invoice` table
insert into invoice values
    ('i01', 4, 'a01', '1993-06-23', '1993-06-25'),
    ('i02', 3, 'a02', '1993-07-12', '1993-07-15'),
    ('i03', 1, 'a02', '1993-07-15', '1993-07-18'),
    ('i04', 6, 'a03', '1993-08-10', '1993-08-13'),
    ('i05', 7, 'a04', '1993-07-05', '1993-07-08'),
    ('i06', 2, 'a06', '1993-08-18', '1993-08-21'),
    ('i07', 9, 'a05', '1993-06-07', '1993-06-10'),
    ('i08', 9, 'a01', '1993-07-11', '1993-07-14'),
    ('i09', 5, 'a03', '1993-06-06', '1993-06-09'),
    ('i10', 8, 'a06', '1993-08-03', '1993-08-06');

-- 1. Find out the names of all the customers.
select fname, lname from cust;
-- 2. Print the entire customer table.
select * from cust;
-- 3. Retrieve the list of fname and the area of all the customers.
select fname, area from cust;
-- 4. List the various movie types available from the movie table.
select type from movie;
-- 5. Find the names of all customers having 'a' as the second letter in their fnames.
select * from cust where fname like '_a%';
-- 6. Find the lnames of all customers that begin with 's' or 'j'.
select * from cust where lname like 'S%' or lname like 'J%';
-- 7. Find out the customers who stay in an area whose second letter is 'a'.
select * from cust where area like '_a';
-- 8. Find the list of all customers who stay in area 'da' or area 'mu' or area 'gh'.
select * from cust where area in ('da', 'mu', 'gh');
-- 9. Print the list of employees whose phone numbers are greater than the value 5550000.
select * from cust where phone_no>5550000;
-- 10. Print the information from invoice table of customers who have been issued movie in month of september.
select * from invoice where extract(month from invoice.issue_date)=9;
-- 11. Display the invoice table information for cust-id 'a01' and 'a02'.
select * from invoice where cust_id in ('a01', 'a02');

-- 12. Find the movies of type 'action' and 'comedy'.
select * from movie where type in ('action', 'comedy');
-- 13. Find the movies whose price is greater than 150 and less than or equal to 200.
select * from movie where price>150 and price<= 200;
-- 14. Find the movies that cost more than 150 and also find the new cost as original cost * 15.
select *, price * 15 from movie where price>150;
-- 15. Rename the new column in the above query as new_price.
select *, price * 15 as new_price from movie where price>150;
-- 16. List the movies in sorted order of their titles.
select * from movie order by title;
-- 17. Print the names and types of all the movie except horror movies.
select title, type from movie where type!='horror';
-- 18. Calculate the square root of the price of each movie.
select *, sqrt(price) as sqrt_price from movie;
-- 19. Divide the cost of movie 'home alone' by difference between its price and 100.
select *, abs(100-movie.price) as cost from movie where title='home alone';
-- 20. List the names, areas and cust-id of customers without phone numbers.
select fname, lname, area, cust_id from cust where phone_no IS NULL;
-- 21. List the names of customers without lname.
select fname, lname from cust where cust.lname IS NULL;
-- 22. List the mv-no, title, type of movies whose stars begin with letter 'm'.
select mv_no, title, type from movie where star like 'm%';
-- 23. List the mv-no and inv-no of customers having inv-no less than 'i05' from the Invoice Transaction Table.
select mv_no, inv_no from invoice where inv_no<'i05';

-- 24. Count the total number of customers.
select count(*) as total from cust;
-- 25. Calculate the total price of all the movies,
select sum(price) from movie;
-- 26. Calculate the average price of all the movies.
select avg(price) from movie;
-- 27. Determine the maximum and minimum movie prices. Rename the title as max-price, min_price respectively.
select max(price) as max_price, min(price) as min_price from movie;
-- 28. Count the number of movies having price greater than or equal to 150.
select count(*) as total from movie where price>=150;

-- 29. Print the information of invoice table in the following format for all records
-- A) The Invoice No. of Customer Id. (cust-id) is (inv-no) and Movie No. is (mv-no).
select concat('The Invoice No. of Customer Id. ',cust_id, ' is ', inv_no, ' and Movie No. is ', mv_no) from invoice;
-- B) (cust-id) has taken Movie No. (mv-no) on (issue-date) and will return on (return_date).
select concat(cust_id, ' has taken Movie No. ', mv_no, ' on ', issue_date, ' and will return on ', return_date) from invoice;

--
-- Having and Group By
--
-- 30. Print the type and average price of each movie.
select title, type, avg(price) as avg_price from movie group by type, title order by type;
-- 31. Find the number of movies in each type.
select type, count(type) from movie group by type order by type;
-- 32. Count separately the number of movies in the 'comedy' and 'thriller' types.
select type, count(type) from movie where type in ('comedy', 'thriller') group by type;
-- 33. Calculate the average price for each type that has a maximum price of 150.00.
select type, avg(price) as avg_price from movie group by type having max(price)=150;
-- 34. Calculate the average price of all movies where type is 'comedy' or 'thriller' and price is greater than or equal to 150.00.
select type, avg(price) as avg_price from movie where price>=150 and type in ('comedy', 'thriller') group by type;

--
-- Joins and Correlations
--
-- 35. Find out the movie number which has been issued to 'ivan'.
select invoice.mv_no from invoice inner join cust c on invoice.cust_id = c.cust_id where c.cust_id = 'a01';
-- 36. Find the names and movie numbers of all the customers who have been issued a movie.
select c.fname, c.lname, invoice.mv_no from invoice inner join cust c on invoice.cust_id = c.cust_id group by c.fname, c.lname, invoice.mv_no having count(invoice.mv_no)>0 order by fname;
-- 37. Select the title, cust-id, mv-no for all the movies that are issued.
select m.title, invoice.cust_id, invoice.mv_no from invoice inner join movie m on invoice.mv_no = m.mv_no group by m.title, invoice.cust_id, invoice.mv_no order by m.title;
-- 38 Find out the title and types of the movies that have been issued to 'Vandana'.
select m.title, m.type from invoice inner join movie m on invoice.mv_no = m.mv_no left join cust c on invoice.cust_id = c.cust_id where c.fname='Vandana';
-- 39. Find the names of customers who have been issued movie of type 'drama'.
select concat(c.fname, ' ', c.lname) from invoice inner join movie m on invoice.mv_no = m.mv_no left join cust c on invoice.cust_id = c.cust_id where m.type='drama';
-- 40. Display the title, lname, fname for customers having movie number greater than or equal to <What?>.
