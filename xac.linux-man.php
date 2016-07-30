<!-- M3TIOR 2015 -->
<!--
	I just realized something....

	I'm a fucking idiot!
	I'm spending a bunch of my time on trying to make this fucking thing
	a modular load! Which is a waste of time put frankly.
	ya know what? screw it... minimal effort ftw.
-->
<?
	$NAME = "XAC";
	$versionNO = $argv[1];
	$build_date = $argv[2];

	#the subcategory linux man puts this program under
	$MAN_LOCAL = "1";

	echo ".TH ".$NAME." ".$MAN_LOCAL." ".$build_date." V".$versionNO." programmed_by_M3TIOR@github.com";
	echo ".SH NAME";
	echo "XAC - E[x]plicit [A]ssembly [C]ompiler";
	echo ".SH SYNOPSYS";
?>
