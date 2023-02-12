<!DOCTYPE html>
<html>
<head>
 <title>Insert name to database</title>
</head>
<body>

<?php
// Connection parameters
$host = 'localhost'; // change to your host
$user = 'root'; // change to your username
$password = ''; // change to your password
$database = 'mydatabase'; // change to your database name

// Connect to the database
$conn = mysqli_connect($host, $user, $password, $database);

// Check if the connection is successful
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// If the form is submitted, insert the name into the database
if (isset($_POST['submit'])) {
    $name = $_POST['name'];
    $sql = "INSERT INTO users (name) VALUES ('$name')";
    if (mysqli_query($conn, $sql)) {
        echo "Name inserted successfully.";
    } else {
        echo "Error: " . $sql . "<br>" . mysqli_error($conn);
    }
}

// Close the database connection
mysqli_close($conn);
?>

<form method="post">
 <label>Name:</label>
 <input type="text" name="name">
 <input type="submit" name="submit" value="Submit">
</form>

</body>
</html>