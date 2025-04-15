create schema module4_assessment;

create table product
(
	pro_id int not null unique,
    pro_name varchar(50) not null unique, 
    pro_price float not null,
    pro_code int not null
);

insert into product values(101,'Mother Board',3200.00,15);
insert into product values(102,'Key Board',450.00,16);
insert into product values(103,'ZIP drive',250.00,14);
insert into product values(104,'Speaker',550.00,16);
insert into product values(105,'Monitor',5000.00,11);
insert into product values(106,'DVD drive',900.00,12);
insert into product values(107,'CD drive',800.00,12);
insert into product values(108,'Priter',2600.00,13);
insert into product values(109,'Refill cartridge',350.00,13);
insert into product values(110,'Mouse',250.00,12);

select * from product;

/*
Q.1
Write sql query to find the items whose prices are higher than or equal 250rs. 
Order the result by product price in descending, then product name in 
ascending. Return pro_name and pro_price 
*/

select pro_name,pro_price from product where pro_price>=250 order by pro_price DESC,pro_name ASC;

/*
Q.2
Write a sql query to find the cheapest item. Return pro_name and pro_price.
*/

select pro_name,pro_price from product order by pro_price ASC limit 1;

/*
Q.3
Write the sql query to calculate the average price of the items for each 
company. Return average price and company code
*/

select left(pro_code,2) as company_code,avg(pro_price) as avg_price from product group by company_code; 

/*
Q.4
Write the sql query to find the average total for all the product mention in the 
table
*/

select avg(pro_price) as avg_total_price from product;

/*
avg_total_price
1435
*/
