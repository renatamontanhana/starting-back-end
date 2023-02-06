<!DOCTYPE html>
<html>
<head>
  <title>PHP and HTML Form</title>
</head>
<body>
  <form action="project.php" method="post">
    <input type="text" name="username" placeholder="Enter username">
    <input type="email" name="email" placeholder="Enter email">
    <input type="submit" name="submit">
  </form>
</body>
</html>

<?php
  if (isset($_POST['submit'])) {
    $username = $_POST['username'];
    $email = $_POST['email'];
  
    // Connect to the database
    $servername = "localhost";
    $dbusername = “root”;
    $dbpassword = “”;
    $dbname = "myadmin";
    
    $conn = mysqli_connect($servername, $dbusername, $dbpassword, $dbname);
    if (!$conn) {
      die("Connection failed: " . mysqli_connect_error());
    }
    
    // Insert the data into the database
    $sql = "INSERT INTO users (username, email)
            VALUES ('$username', '$email')";
    if (mysqli_query($conn, $sql)) {
      echo "Data inserted successfully";
    } else {
      echo "Error inserting data: " . mysqli_error($conn);
    }
    
    mysqli_close($conn);
  }
?>