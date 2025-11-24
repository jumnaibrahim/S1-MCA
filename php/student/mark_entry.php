<?php
include("server.php");
echo "<form action='mark_entry.php' method='post'>";
$qr="SELECT rollno,name from registration";
$res=mysqli_query($con,$qr);
echo "Roll No :- ";
echo "<select name='roll'>";
if(mysqli_num_rows($res)>0){
    echo "<option value='select'></option>";
    while($row=mysqli_fetch_assoc($res)){
        echo "<option value='".$row['rollno']."'>".$row['rollno']."</option>";
    }
}
echo "</select>";
echo "<button name='search'>search</button>";
if(isset($_POST['search'])){
    $roll=$_POST['roll'];
    $qr1="SELECT name from registration where rollno='$roll'";
    $res1=mysqli_query($con,$qr1);
    if(mysqli_num_rows($res1)>0){
            $row=mysqli_fetch_assoc($res1);
            echo "<br><br>Roll No : ".$roll."";
            echo "<br><br>Name : ".$row['name']."";
            echo "<input type='hidden' name='roll' value='".$roll."'>";
    }
}
echo "<br><br>Science : <input type='text' name='sci'>";
echo "<br><br>Maths : <input type='text' name='math'>";
echo "<br><br>English : <input type='text' name='eng'>";
echo "<br><br><input type='submit' name='save' value='Save'>";
echo "<input type='reset' name='reset'>";
if(isset($_POST['save'])){
    $roll=$_POST['roll'];
    $qr3="SELECT * from mark where rollno='$roll'";
    $res3=mysqli_query($con,$qr3);
    if(mysqli_num_rows($res3)>0){
        echo "<script>alert('Roll no already exists')</script>";
    }
    else{
        $roll=$_POST['roll'];
        $sci=$_POST['sci'];
        $math=$_POST['math'];
        $eng=$_POST['eng'];
        $qr2="INSERT INTO mark values('$roll','$sci','$math','$eng')";
        $res2=mysqli_query($con,$qr2);
        if($res2){
        echo "<script>alert('saved successfully')</script>";
        echo "<script>window.location.href='mark_entry.php'</script>";
        }
    }
}
echo "</form>";
?>




