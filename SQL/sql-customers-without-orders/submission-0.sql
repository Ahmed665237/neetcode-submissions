-- Write your query below
select name from customers
where customers.id not in (select orders.customer_id from orders);