-- ************************************************
--                  Assignment 01                 *
-- ************************************************

-- Customer master table
create table cust (
    cust_id varchar(3) primary key not null,
    lname varchar(15),
    fname varchar(15) not null ,
    area varchar(2),
    phone_no int8
);

-- Movies master table
create table movie (
    mv_no varchar(2) primary key not null,
    title varchar(25),
    type varchar(10),
    star varchar(25),
    price numeric
);

-- Invoice transaction table
create table invoice (
    inv_no varchar(3) primary key not null,
    mv_no varchar(2) references movie(mv_no),
    cust_id varchar(3) references cust(cust_id),
    issue_date date,
    return_date date
--     foreign key (cust_id) references cust(cust_id),
--     foreign key (mv_no) references movie(mv_no)
);

-- Insert data into `cust` table
insert into cust values
    ('a01', 'Bayross', 'Ivan', 'sa', 6125467),
    ('a02', 'Saitwal', 'Vandana', 'mu', 5560379),
    ('a03', 'Jaguste', 'Pramada', 'da', 4563891),
    ('a04', 'Navindgi', 'Basu', 'ba', 6125401),
    ('a05', 'Sreedharan', 'Ravi', 'va', null),
    ('a06', null, 'Rukmini', 'gh', 5125274);

-- Insert data into `movie` table
insert into movie values
    ('1', 'bloody vengeance', 'action', 'jackie chan', 180.95),
    ('2', 'the firm', 'thriller', 'tom cruise', 200.00),
    ('3', 'pretty woman', 'romance', 'richard gere', 150.55),
    ('4', 'home alone', 'comedy', 'macaulay culkin', 150.00),
    ('5', 'the fugitive', 'thriller', 'harisson ford', 200.00),
    ('6', 'coma', 'suspense', 'michael douglas', 109.00),
    ('7', 'dracula', 'horror', 'gary oldman', 150.25),
    ('8', 'quick change', 'comedy', 'bill muray', 100.00),
    ('9', 'gone with the wind', 'drama', 'clarke gable', 200.00),
    ('10', 'carry on doctor', 'comedy', 'leslie phillips', 100.00);

-- Insert data into `invoice` table
insert into invoice values
    ('i01', '4', 'a01', '1993-07-23', '1993-07-25'),
    ('i02', '3', 'a02', '1993-08-12', '1993-08-15'),
    ('i03', '1', 'a02', '1993-08-15', '1993-08-18'),
    ('i04', '6', 'a03', '1993-09-10', '1993-09-13'),
    ('i05', '7', 'a04', '1993-08-05', '1993-08-08'),
    ('i06', '2', 'a06', '1993-09-18', '1993-09-21'),
    ('i07', '9', 'a05', '1993-07-07', '1993-07-10'),
    ('i08', '9', 'a01', '1993-08-11', '1993-08-14'),
    ('i09', '5', 'a03', '1993-07-06', '1993-07-09'),
    ('i10', '8', 'a06', '1993-09-03', '1993-09-06');

-- Drop all tables.
drop table cust, movie, invoice;
drop table invoice;

-- 1. Find out the names of all the customers.
select fname, lname from cust;
-- 2. Print the entire customer table.
select * from cust;
-- 3. Retrieve the list of fname and the area of all the customers.
select fname, area from cust;
-- 4. List the various movie types available from the movie table.
select distinct type from movie;
-- 5. Find the names of all customers having 'a' as the second letter in their fnames.
select * from cust where fname like '_a%';
-- 6. Find the lnames of all customers that begin with 's' or 'j'.
select lname from cust where lname like 'S%' or lname like 'J%';
-- 7. Find out the customers who stay in an area whose second letter is 'a'.
select * from cust where area like '_a';
-- 8. Find the list of all customers who stay in area 'da' or area 'mu' or area 'gh'.
select * from cust where area in ('da', 'mu', 'gh');
-- 9. Print the list of employees whose phone numbers are greater than the value 5550000.
select * from cust where phone_no>5550000;
-- 10. Print the information from invoice table of customers who have been issued movie in month of september.
-- select extract(month from issue_date) from invoice;-- where extract(month from issue_date)=9;
select * from invoice where extract(month from issue_date)=9;
-- 11. Display the invoice table information for cust-id 'a01' and 'a02'.
select * from invoice where cust_id in ('a01', 'a02');
-- 12. Find the movies of type 'action' and 'comedy'.
select * from movie where type in ('action', 'comedy');
-- 13. Find the movies whose price is greater than 150 and less than or equal to 200.
select * from movie where price>150 and price<= 200;
-- 14. Find the movies that cost more than 150 and also find the new cost as original cost * 15.
select title, price, price * 15 from movie where price>150;
-- 15. Rename the new column in the above query as new_price.
select title, price, price * 15 as new_price from movie where price>150;
-- 16. List the movies in sorted order of their titles.
select * from movie order by title;
-- 17. Print the names and types of all the movie except horror movies.
select title, type from movie where type!='horror';
-- 18. Calculate the square root of the price of each movie.
select title, sqrt(price) as sqrt_price from movie;
-- 19. Divide the cost of movie 'home alone' by difference between its price and 100.
select *, abs(100-movie.price) as cost from movie where title='home alone';
-- 20. List the names, areas and cust-id of customers without phone numbers.
select fname, lname, area, cust_id from cust where phone_no is null;
-- 21. List the names of customers without lname.
select fname, lname from cust where cust.lname is null;
-- 22. List the mv-no, title, type of movies whose stars begin with letter 'm'.
select mv_no, title, type from movie where star like 'm%';
-- 23. List the mv-no and inv-no of customers having inv-no less than 'i05' from the Invoice Transaction Table.
select mv_no, inv_no from invoice where inv_no<'i05';

--
-- Set function and concatenation
--
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
select type, avg(price) as avg_price from movie group by type;
-- 31. Find the number of movies in each type.
select type, count(type) from movie group by type;
-- 32. Count separately the number of movies in the 'comedy' and 'thriller' types.
select type, count(type) from movie group by type having type in ('comedy', 'thriller');
-- 33. Calculate the average price for each type that has a maximum price of 150.00.
select type, avg(price) as avg_price from movie group by type having max(price)=150;
-- 34. Calculate the average price of all movies where type is 'comedy' or 'thriller' and price is greater than or equal to 150.00.
select type, avg(price) as avg_price from movie where price >= 150.0 group by type having type in ('comedy', 'thriller');

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
-- 40. Display the title, lname, fname for customers having movie number greater than or equal to three, in the following format.
-- The movie taken by {name} {lname} is {title}.
select concat('The movie taken by ', cust.fname, ' ', cust.lname, ' is ', m.title) from cust join invoice i on cust.cust_id = i.cust_id left join movie m on i.mv_no = m.mv_no where m.mv_no >= '3';

--
-- Nested Queries:
--
-- 41. Find out which customers have been issued movie number 9.
select * from cust where cust_id = (select cust_id from movie where mv_no = '9');
-- 42. Find the customer name and area with invoice number 'i10'.
select fname, lname, area from cust where cust_id = (select cust_id from invoice where inv_no='i10');
-- 43. Find the customer names and phone numbers who have been issued movies before the month of August.
select fname, lname, phone_no from  cust where cust_id = any (select cust_id from invoice where issue_date<'01-aug-1993');
-- 44. Find the name of the movie issued to 'vandana' and 'ivan'.
select title from movie where mv_no= any(select mv_no from invoice where cust_id= any(select cust_id from cust where fname in ('Ivan', 'Vandana')));
-- 45. List the movie number, movie names issued to all customers.
select distinct mv_no, title from movie where mv_no= any(select mv_no from invoice);
-- 46. Find the type and movie number of movie issued to cust-id 'a01' and 'a02.
select type, mv_no from movie where mv_no= any(select mv_no from invoice where cust_id in ('a01', 'a02'));
-- 47. Find out if the movie starring' tom cruise' is issued to any customer and print the cust_id whom it is issued.
select cust_id from invoice where mv_no = (select mv_no from movie where star='tom cruise');
-- 48. Find the lnamne, fname who have been issued movies.
select fname, lname from cust where cust_id = any (select cust_id from movie);
--
-- Queries using date:
--
-- 49. Display the invoice number and day on which customers were issued movies.
select inv_no,  issue_date from invoice;
-- 50. Display the month (in alphabets) in which customers are supposed to return the movies.
select inv_no, to_char(date(return_date), 'Mon') as return_date from invoice;
-- 51. Display the issue-date in the format 'dd-month-yy'. For eg. 12-february-93.
select inv_no, to_char(date(issue_date), 'DD-Mon-YYYY') as issue_date from invoice;
-- 52. Find the date, 15 days after the current date.
select to_char(date(now()) + 15, 'DD-Mon-YYYY');
-- 53. Find the number of days elapsed between the current date and the return date of the movie for all customers.
select age(date(return_date)) from invoice;

--
-- Table Updations
--
-- 54. Change the telephone number of Pramada to 466389.
update cust set phone_no='466389' where fname='Pramada';
-- 55. Change the issue - date of cust- id 'A01' to 24/07/93.
update invoice set issue_date='1993-07-24' where cust_id='a01';
-- 56. Change the price of 'gone with the wind' to Rs. 250.00.
update movie set price=250.00 where title='gone with the wind';
-- 57. Delete the record with invoice number 'i08' from the invoice table.
delete from invoice where inv_no='i08';
-- 58. Delete all the records having return date before 10th July'93.
delete from invoice where return_date<'10-jul-1993';
-- 59. Change the area of cust-id 'A05' to 'vs'.
update cust set area='vs' where cust_id='a05';
-- 60. Change the return date of invoice number 'i08' to 16-08-93.
update invoice set return_date='1993-08-16' where inv_no='i08';