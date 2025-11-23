<?php
include("server.php");
echo "<form action='login.php' method='post'>";
echo "<h2>Login page</h2>";
echo "Username <input type='text' name='user'><br><br>";
echo "Password <input type='password' name='password'><br><br>";
echo "<input type='submit' name='submit' value='Login'>";
echo "<input type=reset>";
echo "</form>";
if(isset($_POST['submit'])){
    $user=$_POST['user'];
    $password=$_POST['password'];
    $query="SELECT * from login where username='$user' and password='$password'";
    $result=mysqli_query($con,$query);
    if(mysqli_num_rows($result)>0){
        echo "<script>window.location.href='admin.php'</script>";
    }
    else{
        echo "<script>alert('invalid credentials')</script>";
    }
}
?>