<?php
include 'haut.php';
include 'fonction.php';

// Vérification des valeurs rentrées dans le formulaire.


//onblur <--- Pour utiliser des fonctions dans des input

// Affichage du formulaire.
?>

<script type="text/javascript">
	// Fonction de test
	function testJS()
	{
 		alert("ploum");
	}
	// Fonction pour les horaires
	function horaire(){
		
	}
	// Fonction pour afficher le fieldset
	function montre(id){
		document.getElementById(id).style.display = "block";
	}
	// Fonction pour cacher le fieldset
	function cacher(id){
		document.getElementById(id).style.display = "none";
	}
	function verifForm()
	{
		// &&  && prenomOk && cpOk && telMOk && telFOk && villeOk && IBANOk && siretOk && repSOk)
		var pseudoOk = document.getElementById("Pseudo");
		var nomOk = document.getElementById("Nom");
		var prenomOk = document.getElementById("Prenom");
		var cpOk = document.getElementById("Cp");
		var telMOk = document.getElementById("Tel");
		var telFOk = document.getElementById("TelFix");
		var villeOk = document.getElementById("Ville");
		var IBANOk = document.getElementById("IBAN");
		var siretOk = document.getElementById("Siret");
		var repSOk = document.getElementById("repSec");
/* alert (verifNomPrenom(nomOk));
alert (verifNomPrenom(prenomOk));
alert (verifPseudo(pseudoOk));
alert (verifTel(telMOk));
alert (verifTel(telFOk));
alert (verifVille(villeOk));
alert (verifIBAN(IBANOk));
alert (verifSiret(siretOk));
alert (verifRepS(repSOk)); */
 		var test = verifPseudo(pseudoOk) && verifNomPrenom(nomOk) && verifNomPrenom(prenomOk) && verifTel(telMOk) && verifTel(telFOk) && verifVille(villeOk) && verifRepS(repSOk);
		// alert (test);
		if(test){
			return true;
		} else {
			alert("Certains champs ne sont pas remplis correctement !");
			return false;
		}
	} 


	function surligne(champ, erreur)
	{
		if(erreur){
			champ.style.borderColor = "#FD3C3C";
		}else {
			champ.style.borderColor = "";
		}
	} 
	
	function verifNomPrenom(champ)
	{
		var regex= /^[a-zA-Z-]{2,}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ, true);
			return false;
		} else {
			surligne(champ, false);
			return true;
		}
	}

	function verifCp(champ)
	{
		var regex= /^[0-9]{5,5}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}

	function verifTel(champ)
	{
		var regex = /^[0-9]{10,10}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}

	function verifPseudo(champ)
	{
		var regex = /^[a-zA-Z0-9-]{5,15}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}

	function verifVille(champ)
	{
		var regex = /^[a-zA-Z-]{1,}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}

	function verifIBAN(champ)
	{
		var regex = /^[A-Z0-9]{27,27}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}

	function verifSiret(champ)
	{
		var regex = /^[0-9]{14,14}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}

	function verifRepS(champ)
	{
		var regex = /^[a-zA-Z0-9-]{1,}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}
</script>

<form method="POST" action="./inscription.php" onsubmit="return verifForm(this)" >
	<p>
		<label> Choisissez votre type : </label> <br>
		<input type = "radio" name = "typeUser" value = "Conso" onClick="montre('all'); cacher('prodPdv'); montre('choisirPDV'); cacher('horaire');" > Consommateur </input>
		<input type = "radio" name = "typeUser" value = "Producteur" onClick="montre('prodPdv'); montre('all'); cacher('choisirPDV'); cacher('horaire'); "> Producteur </input>
		<input type = "radio" name = "typeUser" value = "PtVente" onClick="montre('prodPdv'); montre('all'); cacher('choisirPDV'); montre('horaire');"> Point de vente </input>
	</p>
<fieldset id="all" style="display: none;">
	<p>
		<label for= "Nom">*<?php echo $formuInscri_lastName ?> :</label> <input type="text" name="nom" id="Nom" placeholder="Ex : Dupond" size="30" required onblur="verifNomPrenom(this)" />
	</p>
	<p>
		<label for="Prenom">*<?php echo $formuInscri_firstName ?> :</label> <input type="text" name="prenom" id="Prenom" placeholder="Ex : Gérard" size="30" required onblur="verifNomPrenom(this)" />
	</p>

	<p>
		<label for="Pseudo">*<?php echo $formuInscri_pseudo ?> :</label> <input type="text" name="pseudo" id="Pseudo" placeholder="Ex : monPseudo" size="30" required onblur="verifPseudo(this)" />
	</p>
	<p>
		<label for="Ville">*<?php echo $formuInscri_city ?> :</label> <input type="text" name="ville" id="Ville" placeholder="Ex : Gap" required onblur="verifVille(this)" />
	</p>
	<p>
		<label for="Cp">*<?php echo $formuInscri_postalCode ?> :</label> <input type="text" name="cp" id="Cp" placeholder="Ex : 05000" maxlength="5" required onblur="verifCp(this)" />
	</p>
	<p>
		<label for="Tel">*<?php echo $formuInscri_cellphoneNumber ?> :</label> <input type="text" name="tel" id="Tel" placeholder="Ex : 0624587958" minlength="10" maxlength="10" required onblur="verifTel(this)"  />
	</p>
	<p>
		<label for="TelFix"><?php echo $formuInscri_phoneNumber ?> :</label> <input type="text" name="telFix" id="TelFix" placeholder="Ex : 0492578465" maxlength="10" onblur="verifTel(this)"  />
	</p>
	<p>
		<label for="E-mail">*<?php echo $formuInscri_eMail ?> :</label> <input type="email" name="e-mail" id="E-mail" placeholder="Ex : fuzfguz@hotmail.fr" required onlbur="verifMail(this)"  />
	</p>
<fieldset id="prodPdv" style="display: none;">
	<p>
		<label for="IBAN">*<?php echo $formuInscri_bank ?> :</label> <input type="text" name="iban" id="IBAN" placeholder="Ex : FR3330002005500000157841Z25" size="27" maxlength="27" onblur="verifIBAN(this)" />
	</p>
	<p>
		<label for="Siret">*<?php echo $formuInscri_siret ?> : </label> <input type="text" name="siret" id="Siret" placeholder="Ex : 40483304800022" size="14" maxlength="14" onlbur="verifSiret(this)" />
	</p>
</fieldset>
<fieldset id="horaire" style="display : none;">
	<p>
		Jours et horaires d'ouverture :
		<input name="jour" type=checkbox value="lundi" onChange="testJS();"; > <?php echo $formuInscri_day1; ?> </input> 
		<input name="jour" type=checkbox value="mardi" onChange="horaire();"> <?php echo $formuInscri_day2; ?> </input>
		<input name="jour" type=checkbox value="mercredi"> <?php echo $formuInscri_day3; ?> </input>
		<input name="jour" type=checkbox value="jeudi"> <?php echo $formuInscri_day4; ?> </input>
		<input name="jour" type=checkbox value="vendredi"> <?php echo $formuInscri_day5; ?> </input>
		<input name="jour" type=checkbox value="samedi"> <?php echo $formuInscri_day6; ?> </input>
		<input name="jour" type=checkbox value="dimanche"> <?php echo $formuInscri_day7; ?> </input>
	</p>
</fieldset>
<fieldset id="choisirPDV" style="display : none;">
	<p>
		<?php 
		$result = ptsDeVente();
		while($data = mysql_fetch_assoc($result)){ ?>
			Cochez les points de ventes que vous voulez : <br>
			<input name="pdv" type=checkbox value="pdv1"> <?php  echo $data['nom'];  ?> </input>
		<?php
		}
		?>
	</p>
</fieldset>
	<p>
		<label for="QuestionSec">*<?php echo $formuInscri_secretQuest ?> :</label> 
		<select name="questionSec" id="QuestionSec">
			<option value="question1"><?php echo $formuInscri_question1 ?></option>
			<option value="question2"><?php echo $formuInscri_question2 ?></option>
			<option value="question3"><?php echo $formuInscri_question3 ?></option>
			<option value="question4"><?php echo $formuInscri_question4 ?></option>
		</select>
	</p>
	<p>
		<label for="RepSec">*<?php echo $formuInscri_secretAnswer ?> :</label> <input type="text" name="repSec" id="RepSec" required onblur="verifRepS(this)" />
	</p>
	<p>
		<?php echo $formuInscri_fill; ?>
	</p>
	
	<p>
		<input type="submit" name="valider" value="<?php echo $formuInscri_validate?>" >
	</p>
</fieldset>

</form> 

<?php

include'bas.php';
?>
