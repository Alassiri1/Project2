## Project Description
A simple web application that allows users to input their name and age, store the data into a MySQL database, display the records in a dynamic table, and toggle the status value (0 or 1) instantly without reloading the page.

## Technologies Used

*Frontend: HTML5, CSS3, JavaScript (AJAX / XMLHttpRequest)
*Backend: PHP
*Database: MySQL
*Hosting: InfinityFree

## Implementation Steps
1. **Webpage Design:** Created the structure and styled the form to fit in a single line using HTML and CSS.
2. **Database Setup:** Created a database table named `user` on InfinityFree hosting with the columns: `ID`, `Name`, `Age`, and `Status`.
3. **Data Insertion:** Connected the form to the PHP script to insert user inputs into the database upon submission.
4. **Data Retrieval:** Wrote a `SELECT` query to fetch all stored records and display them in a table below the form.
5. **Toggle Feature:** Added a button for each record to switch the status value between 0 and 1, sending a background POST request (AJAX) to the server.
6. **Immediate Reflection:** Updated the user interface instantly using JavaScript as soon as the server confirmed a successful database update, without reloading the entire page.
