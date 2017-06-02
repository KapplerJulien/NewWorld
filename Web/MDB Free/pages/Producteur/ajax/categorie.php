<?php
include '../../../fonction/fonction.php';

$rayon = $_POST["nomRayon"];
$result =  listeCategories($rayon);
$recupCategorie = "";
while($data = mysql_fetch_assoc($result)){
	// var_dump($data);
	$recupCategorie .= "<button type='button' class='btn btn-default' onclick=' afficheProduit(\"".$data["libelleCat"]."\")' id='".$data["libelleCat"]. "'>".$data["libelleCat"]."</button>";
}

header('Content-type: application/json');
?>
{
"categorie": <?php echo json_encode($recupCategorie, JSON_UNESCAPED_UNICODE); ?>
}