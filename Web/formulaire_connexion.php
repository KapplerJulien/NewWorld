<?php
include 'haut.php';
include 'fonction.php';
?>

<script type="text/javascript">
	// Fonction javascript
	function surligne(champ, erreur)
	{
		if(erreur){
			champ.style.borderColor = "#FD3C3C";
		}else {
			champ.style.borderColor = "";
		}
	} 
	
	function verifPseudo(champ)
	{
		var regex= /^[a-zA-Z-]{5,15}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ, true);
			return false;
		} else {
			surligne(champ, false);
			return true;
		}
	}
	
	function verifMotPasse(champ)
	{
		var regex = /^[a-zA-Z0-9]{8,8}$/;
		if(!regex.test(champ.value))
		{
			surligne(champ,true);
			return false;
		} else {
			surligne(champ,false);
			return true;
		}
	}
<script>

	

<?php
include 'bas.php';
?>
