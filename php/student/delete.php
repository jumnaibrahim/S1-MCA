<?php
include("server.php");
echo "<form id='form1' action='delete.php' method='post'>";
echo "<table border=1px>";
echo "<tr>";
echo "<th width=150px>NAME</th>";
echo "<th width=150px>ROLL NO</th>";
echo "<th width=150px>ADDRESS</th>";
echo "<th width=150px>PHONE NO</th>";
echo "<th width=150px>USERNAME</th>";
echo "</tr>";
$query="SELECT name,rollno,address,phone,username from registration";
$result=mysqli_query($con,$query);
while($row=mysqli_fetch_assoc($result)){
    echo "<tr>";
    echo "<td align=center>".$row['name']."</td>";
    echo "<td align=center>".$row['rollno']."</td>";
    echo "<td align=center>".$row['address']."</td>";
    echo "<td align=center>".$row['phone']."</td>";
    echo "<td align=center>".$row['username']."</td>";
    echo "<td><button name='update' value='".$row['rollno']."'>Update</button></td>";
    echo "<td><button name='delete' value='".$row['rollno']."'>Delete</button></td>";
    echo "</tr>";
}
echo "</table>";
echo "</form>";
if(isset($_POST['delete'])){
    $roll=$_POST['delete'];
    $qr="DELETE from registration where rollno='$roll'";
    if(mysqli_query($con,$qr)){
        echo "<script>alert('successfully deleted')</script>";
        echo "<script>window.location.href='delete.php'</script>";
    }
}
if(isset($_POST['update'])){
    $roll=$_POST['update'];
    $qr1="SELECT * FROM registration where rollno='$roll'";
    $res=mysqli_query($con,$qr1);
    $row=mysqli_fetch_assoc($res);
    echo "<form id='form2' action='update.php' method='post'>";
    echo "<input type='hidden' name='name' value='".$row['name']."'>";
    echo "<input type='hidden' name='rolll' value='".$row['rollno']."'>";
    echo "</form>";
    echo "<script>document.getElementById('form2').submit()</script>";
}
?>