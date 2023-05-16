<?php
session_start();
if($_SERVER['REQUEST_METHOD']=="POST"){
if (isset($_POST['submit'])) {
    if(empty($_POST['ecap'])){
        echo"please enter captcha";
    }
    else if ($_SESSION['CAPTCHA_CODE'] !== $_POST['ecap']) {
        echo "enter valid captcha \n";
    }
    else if($_SESSION['CAPTCHA_CODE'] === $_POST['ecap'])  {
        echo "your form has been submited successfully \n";
     }
}
}
?>

<form method="POST">
    <label for="name">name:</label>
    <input name="name">
    <br>
    <label for="email">E-mail:</label>
    <input name="email" type="email">
    <br>
    <img src="captcha.php" alt="captcha image" srcset=""><br>
    <label for="captcha">Enter captcha</label>

    <input type="text" name="ecap">
 
    
    <br>
    <input type="submit" name="submit">
</form>
<?php

    
