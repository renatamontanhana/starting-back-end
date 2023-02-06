<!DOCTYPE html>
<html>
<body>

<h1>My first PHP page</h1>

<?php
  $num1 = 123;
  $num2 = 4.56;
  $string1 = "Hello";
  $string2 = 'World!';
  $array1 = array("apple", "banana", "cherry");

  echo "Number 1: $num1<br>";
  echo "Number 2: $num2<br>";
  echo "String 1: $string1<br>";
  echo "String 2: $string2<br>";
  echo "Array 1: " . $array1[0] . ", " . $array1[1] . ", " . $array1[2] . "<br>";
 ?>

</body>
</html>