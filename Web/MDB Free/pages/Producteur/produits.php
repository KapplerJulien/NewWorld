<?php
	session_start();
	include '../haut.php';
?>
<form method="POST" action="./connexion.php" >
	<!--Form with header-->
	<div class="card affichageConnexion">
	    <div class="card-block">
	        <!--Header-->
	        <div class="form-header blue-gradient">
	            <h3><i class="fa fa-user"></i> Ajout d'un produit:</h3>
		        </div>
		        <!--Body-->
		        <div class="md-form">
		            <i class="fa fa-user prefix"></i>
	            <input type="text" id="Produit" name="produit" placeholder="Votre produit">
		        </div>
		        <div class="text-center">
	            <input type="Submit" class="btn btn-indigo" value="Ajout du produit" >
	            <hr>
	        </div>
	    </div>
	</div>
<!--/Form with header-->
</form>