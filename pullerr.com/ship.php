<!DOCTYPE html>

<html>
<head>
<title>SHIPPERS</title>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">
<link href="../layout/styles/layout.css" rel="stylesheet" type="text/css" media="all">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
</head>
<body id="top">
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->

<div class="wrapper row0">
  <div id="topbar" class="hoc clear"> 
    
    <div class="fl_left">
      <ul class="faico clear">
        <li><a class="faicon-facebook" href="#"><i class="fa fa-facebook"></i></a></li>
        
        <li><a class="faicon-twitter" href="#"><i class="fa fa-twitter"></i></a></li>
      
        <li><a class="faicon-linkedin" href="#"><i class="fa fa-linkedin"></i></a></li>
        <li><a class="faicon-google-plus" href="#"><i class="fa fa-google-plus"></i></a></li>
        
      </ul>
    </div>
    <div class="fl_right">
      <ul class="nospace inline pushright">
        <li><i class="fa fa-phone"></i> +918878677788 </li>
        <li><i class="fa fa-envelope-o"></i> pr@pullerr.com</li>
      </ul>
    </div>
    
  </div>
</div>

<div class="wrapper row1">
  <header id="header" class="hoc clear"> 
    <div id="logo" class="fl_left">
      <h1><a href="index.html">PULLERR</a></h1>
    </div>
    <!-- ################################################################################################ -->
    <nav id="mainav" class="fl_right">
      <ul class="clear">
        <li ><a href="index.html">Home</a></li>
        
      <li class="active"><a href="">Shippers</a></li>
        
		<li ><a href="#">Carriers</a></li>
        <li><a href="#">About Us</a></li>
        <li><a href="#">Careers</a></li>
		<li><a href="#">Contact Us</a></li>
      </ul>
    </nav>
   
  </header>
</div>

<form name="myform" method="post">
First name*:  <input type="text" name="first_name" /> 
</br> </br>
Username*:<input type="text" name="username" /> </br> </br>
email:<input type="text" name="email" /> </br> </br>
password*:<input type="password" name="password" /> </br> </br>
contact no.: <input type="text" name="cno" /> </br> </br>
<input type="submit" name="submit" value="Submit" />
<input type="reset" name="reset" value="Reset" />
</form> 

 
 <?php
 $db_name= "pullex41_contact_us";
$mysql_username="pullex41_ayushi";
$mysql_password="momdad555";
$server_name="localhost";
$conn= mysqli_connect($server_name,$mysql_username,$mysql_password,$db_name);

if($_SERVER["REQUEST_METHOD"] == "POST") {
$fname = mysqli_real_escape_string($db,$_POST['first_name']);
$femail= mysqli_real_escape_string($db,$_POST['email']); 
$fusername= mysqli_real_escape_string($db,$_POST['username']); 
$fpassword= mysqli_real_escape_string($db,$_POST['password']); 
$fcno= mysqli_real_escape_string($db,$_POST['cno']);  

$_SESSION['h']=$fusername;
$_SESSION['k']=$femail;
$sql2 = "INSERT INTO contact".
       "(name,email,phone,comment) ".
       "VALUES ".
       "('$fname','$femail','$fcno','$fpassword')";


$result = mysqli_query($conn,$sql2) or die("the user already exists");
print("you are signedeup!!! login to submit an application:");     
}
?>

  <div class="wrapper row3" id="lol">
  <main class="hoc container clear"> 
    <!-- main body -->
    <!-- ################################################################################################ -->
    <div class="content"> 
      <!-- ################################################################################################ -->
      <h1>shippers</h1>
      <img class="imgr borderedbox inspace-5" src="../images/demo/imgr.gif" alt="">
      <p>                  line1                                            </p>
      <p>line2 <a href="#">temper donec auctortortis cumsan</a> et curabitur condis lorem loborttis leo. Ipsumcommodo libero nunc at in velis tincidunt pellentum tincidunt vel lorem.</p>
      <img class="imgl borderedbox inspace-5" src="../images/demo/imgl.gif" alt="">
      <p>This is a W3C compliant free website template from <a href="http://www.os-templates.com/" title="Free Website Templates">OS Templates</a>. For full terms of use of this template please read our <a href="http://www.os-templates.com/template-terms">website template licence</a>.</p>
      <p>You can use and modify the template for both personal and commercial use. You must keep all copyright information and credit links in the template and associated files. For more website templates visit our <a href="http://www.os-templates.com/">free website templates</a> section.</p>
      <p>Portortornec condimenterdum eget consectetuer condis consequam pretium pellus sed mauris enim. Puruselit mauris nulla hendimentesque elit semper nam a sapien urna sempus.</p>
     
	 
    </div>
 <div class="clear"></div>
  </main>
</div>
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<div class="wrapper row4">
  <footer id="footer" class="hoc clear"> 
    <!-- ################################################################################################ -->
    <div class="one_third first">
      <h6 class="title">    OUR LOCATION</h6>
      <ul class="nospace linklist contact">
        <li><i class="fa fa-map-marker"></i>
          <address>Plot No.-1 Block No.-46/F<br/>
         Transport Nagar,Hathkhoj <br/>Bhilai,Chhattisgarh
          </address>
        </li>
        <li><i class="fa fa-phone"></i>+918878677788
         </li>
        
        <li><i class="fa fa-envelope-o"></i> pr@pullerr.com</li>
      </ul>
    </div>
    
 <div class="one_third">
      <h6 class="title"></h6>
      <ul class="nospace linklist">
        <li><a href="#">About us</a></li>
        <li><a href="#">Careers</a></li>
        <li><a href="#">Services</a></li>
        <li><a href="#">Terms&Conditions </a></li>
       
      </ul>
    </div>
  
    <!-- ################################################################################################ -->
  </footer>
</div>
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<div class="wrapper row5">
  <div id="copyright" class="hoc clear"> 
    <!-- ################################################################################################ -->
    <p class="fl_left">Copyright &copy; 2017 - All Rights Reserved - <a href="#">pullerr.com</a></p>
    
  </div>
</div>
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->
<!-- ################################################################################################ -->

<script>

$(window).scroll(function() {
  $(".slideanim").each(function(){
    var pos = $(this).offset().top;

    var winTop = $(window).scrollTop();
    if (pos < winTop + 600) {
      $(this).addClass("slide");
    }
  });
});
</script>



<a id="backtotop" href="#top"><i class="fa fa-chevron-up"></i></a>
<!-- JAVASCRIPTS -->
<script src="../layout/scripts/jquery.min.js"></script>
<script src="../layout/scripts/jquery.backtotop.js"></script>
<script src="../layout/scripts/jquery.mobilemenu.js"></script>
<!-- IE9 Placeholder Support -->
<script src="../layout/scripts/jquery.placeholder.min.js"></script>
<!-- / IE9 Placeholder Support -->
</body>
</html>