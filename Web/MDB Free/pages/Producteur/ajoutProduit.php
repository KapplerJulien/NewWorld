<?php
	session_start();
	include '../haut.php';
    include '../../fonction/fonction.php';
?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title>Material Design Bootstrap</title>
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.0/css/font-awesome.min.css">
    <!-- Bootstrap core CSS -->
    <link href="../../css/bootstrap.min.css" rel="stylesheet">
    <!-- Material Design Bootstrap -->
    <link href="../../css/mdb.min.css" rel="stylesheet">
    <!-- Your custom styles (optional) -->
    <link href="../../css/style.css" rel="stylesheet">

    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.1.0/jquery.min.js"></script>
</head>
<body>
    <script type="text/javascript">
        function afficheCategorie(rayon){
            // alert(rayon);
            $.ajax({
                url : "./ajax/categorie.php",
                type : "POST",
                dataType : "JSON",
                data : {nomRayon : rayon},
                success : function(data)
                {
                    $("#affichageCat").html(data.categorie);
                }
            });
        }
        function afficheProduit(categorie){
            $.ajax({
                url : "./ajax/produit.php",
                type : "POST",
                dataType : "JSON",
                data : {nomCategorie : categorie},
                success : function(data)
                {
                    $("#affichageProd").html(data.produit);
                }
            });
        }
    </script>
    <!--<select size="1" name="rayon" id="Rayon" onChange="afficheCategorie(this);">
        <option selected>
        <?php
            // $resultRayon = listeRayons();
            // while($data = mysql_fetch_assoc($resultRayon)){
               // echo "<option>".$data["libelleRay"]."</option>";
            // }
        ?>
    </select> -->

<?php
$res=listeRayons();
while($data =mysql_fetch_assoc($res))
{
    echo "<button type='button' class='btn btn-default' onclick=' afficheCategorie(\"".$data["libelleRay"]."\")' id='".$data["libelleRay"]. "'>".$data["libelleRay"]."</button>";
}
?>
<div id="affichageCat" ></div>
<div id="affichageProd" ></div> 
<?php

        // $test = listeProduits(1);
        // var_dump($test);
        // include '../bas.php';
?>
</body>
</html>