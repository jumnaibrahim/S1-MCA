<?php
include("Server.php");
echo "<form action='mark_update.php' method='post'>";
$qr="SELECT rollno from mark";
$res=mysqli_query($con,$qr);
echo "Roll No : ";
echo "<select name='roll'>";
if(mysqli_num_rows($res)>0){
    echo "<option></option>";
    while($row=mysqli_fetch_assoc($res)){
        echo "<option value='".$row['rollno']."'>".$row['rollno']."</option>";
    }    
}
echo "</select>";
echo "<input type='submit' name='search' value='search'>";
if(isset($_POST['search'])){
    $roll=$_POST['roll'];
    $qr1="SELECT * from mark where rollno='$roll'";
    $res1=mysqli_query($con,$qr1);
    if(mysqli_num_rows($res1)>0){
            $row=mysqli_fetch_assoc($res1);
            echo "<br><br>Roll No : ".$roll."";
            $qr2="SELECT registration.name from registration join mark on registration.rollno=mark.rollno where registration.rollno='$roll'";
            $res2=mysqli_query($con,$qr2);
            if(mysqli_num_rows($res2)>0){
            $val=mysqli_fetch_assoc($res2);
            echo "<br><br>Name : ".$val['name']."";
        }
        echo "<br><br>Science : <input type='text' name='sci' placeholder='".$row['science']."' required>";
        echo "<br><br>Maths : <input type='text' name='math' placeholder='".$row['maths']."' required>";
        echo "<br><br>English : <input type='text' name='eng' placeholder='".$row['english']."' required>";
        echo "<br><br><input type='submit' name='update' value='Update'>";
        echo "<input type='reset'>";
        echo "<input type='hidden' name='roll' value='".$roll."'>";
    }
}
if(isset($_POST['update'])){
    $roll=$_POST['roll'];
    $sci=$_POST['sci'];
    $math=$_POST['math'];
    $eng=$_POST['eng'];
    $qr3="UPDATE mark SET science='$sci',maths='$math',english='$eng' where rollno='$roll'";
    $res3=mysqli_query($con,$qr3);
    if($res3){
        echo "<script>alert('updated successfully')</script>";
        echo "<script>window.location.href='mark_update.php'</script>";
    }
}
//echo "<input type='hidden' name='roll' value='".$roll."'>";
echo "</form>";
?>
