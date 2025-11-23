<?php
include("server.php");
echo "<form action='update.php' method='post'>";
$roll=$_POST['rolll'];
echo "Name :".$_POST['name']."<br><br>";
echo "Roll No :".$roll."<br><br>";
echo "<input type='hidden' name='rolll' value='".$roll."'>";
$qr1="SELECT * from registration where rollno='$roll'";
$res1=mysqli_query($con,$qr1);
$row=mysqli_fetch_assoc($res1);
echo "Address : <input type='text' name='address' value='".$row['address']."'><br><br>";
echo "Phone No : <input type='text' name='phone' value='".$row['phone']."'><br><br>";
echo "<button name='update'>Update</button>";
echo "</form>";
if(isset($_POST['update'])){
    $rollno=$_POST['rolll'];
    $address=$_POST['address'];
    $phoneno=$_POST['phone'];
    $qr="UPDATE registration SET address='$address',phone='$phoneno' where rollno='$rollno'";
    $res=mysqli_query($con,$qr);
    if($res){
        echo "<script>alert('updated successfully')</script>";
        echo "<script>window.location.href='delete.php'</script>";
    }
}

?>