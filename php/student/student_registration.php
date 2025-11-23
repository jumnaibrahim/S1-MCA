<?php
include("server.php");
echo "<form action='student_registration.php' method='post'>";
echo "Name : <input type='text' name='name'><br><br>";
echo "Roll No : <input type='text' name='roll'><br><br>";
echo "Address : <input type='text' name='address'><br><br>";
echo "Phone Number : <input type='text' name='phoneno'><br><br>";
echo "Username : <input type='text' name='user'><br><br>";
echo "Password : <input type='password' name='pass'><br><br>";
echo "Re-enter Password : <input type='password' name='repass'><br><br>";
echo "<input type='submit' name='submit'>";
echo "<input type='reset'>";
echo "</form>";
if(isset($_POST['submit'])){
    $roll=$_POST['roll'];
    $password=$_POST['pass'];
    $repassword=$_POST['repass'];
    $name=$_POST['name'];
    $address=$_POST['address'];
    $phone=$_POST['phoneno'];
    $user=$_POST['user'];
    $query="SELECT * from registration where rollno='$roll'";
    $result=mysqli_query($con,$query);
    if(mysqli_num_rows($result)>0){
        echo "<script>alert('Roll No already exists')</script>";
    }
    else if($password!=$repassword){
        echo "<script>alert('password doesnt match')</script>";
    }
    else{
        $query1="INSERT INTO registration values('$name','$roll','$address','$phone','$user','$password')";
        if(mysqli_query($con,$query1)){
            echo "<script>alert('Successfully Registered')</script>";
        }
    }
}
?>