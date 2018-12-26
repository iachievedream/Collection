<!DOCTYPE html>
<html>
<head>
<title>Page Title</title>

</head>
<body>
<?php
  $username=$_POST['username'];
  $password=$_POST['password'];
  require_once('conn_mysql.php');
  $sql = "SELECT * FROM Delivery_resume";
  $result = mysql_query($sql,$db);
  $row_record = mysql_fetch_assoc($result);
  $totalRows = mysql_num_rows($result);
?>

<html>
 <head><title></title>
    </head>
    <body>
     <table border="1">
         <tr>
      <?php $i=1;
      do{
        if($i%3 == 1){
         echo '<tr><td>'.$row_record['ID'].'</td>';
        }
        elseif ($i%3 == 2){
         echo '<td>'.$row_record['position'].'</td>';
        }
         elseif ($i%3 == 0){
        echo '<td>'.$row_record['companyint'].'</td></tr>';
        }
        $i++;
     }while($row_record = mysql_fetch_array($result));
     ?>
         </tr>
      </table>
    </body>
</html>

</body>
</html>
