<?php
// Connection à Mysql
$connect = mysql_connect('localhost','adminDBNewWorld','Pa$$w0rd');

// Sélection de la base
mysql_select_db('dbNewWorldUp',$connect);

mysql_set_charset('utf8',$connect);
?>