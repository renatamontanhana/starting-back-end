<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
  // Retrieve form data
  $name = $_POST['name'];
  $email = $_POST['email'];
  $message = $_POST['message'];

  // Process form data (e.g. sending an email)
  // ...

  // Redirect to success page
  header('Location: success.php');
  exit;
}
?>
<form action="" method="post">
  <input type="text" name="name" placeholder="Your name">
  <input type="email" name="email" placeholder="Your email">
  <textarea name="message" placeholder="Your message"></textarea>
  <button type="submit">Submit</button>
</form>