<?php

// Connect to database
$servername = "localhost";
$username = "root";
$password = '';
$dbname = "dbren";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Check if form is submitted
if(isset($_POST['submit'])) {

  // Get form data and sanitize
  $name = sanitize_input($_POST['name']);
  $email = sanitize_input($_POST['email']);
  $message = sanitize_input($_POST['message']);

  // Validate email
  if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
    die("Invalid email format");
  }

  // Save data to database
  $stmt = $conn->prepare("INSERT INTO contact_form (name, email, message) VALUES (?, ?, ?)");
  $stmt->bind_param("sss", $name, $email, $message);

  if ($stmt->execute()) {
    echo "Data saved to database.";
  } else {
    echo "Error: " . $stmt->error;
  }

  // Send email
  $to = "recipient@example.com";
  $subject = "New Contact Form Submission";
  $message = "Name: $name\nEmail: $email\nMessage: $message";
  $headers = "From: sender@example.com";

  if (mail($to, $subject, $message, $headers)) {
    echo "Email sent.";
  } else {
    echo "Error: Email not sent.";
  }
}

// Close database connection
$conn->close();

// Sanitize input data
function sanitize_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

?>

<!-- HTML form -->
<form method="POST">
  <input type="text" name="name" placeholder="Name" required>
  <input type="email" name="email" placeholder="Email" required>
  <textarea name="message" placeholder="Message" required></textarea>
  <input type="submit" name="submit" value="Submit">
</form>