<?php
function zmodule2pray () {
//    $st="lkhhv<br>";
//    $st=$st."second";
//    $havangahtime=date_sunrise(time(), SUNFUNCS_RET_STRING, 59.56, 30.15, 90.583333, 3);
    
//    $d1=new DateTime("2012-07-08 11:14:15.638276");
    $tz = new DateTimeZone(variable_get('timezone'));
//    $st=timezone_name_get($tz);
    $dtcur=new DateTime("now", $tz);
    
    
/*
    	<li>
		Хаван-гах&nbsp;&mdash; от рассвета ( в <?php echo date_sunrise(time(), SUNFUNCS_RET_STRING, 59.56, 30.15, 90.583333, 4); ?>)* до полудня (12:00);</li>
	<li>
		Рапитвин-гах&nbsp;&mdash; от полудня ( в 12:00) до 3 часов по полудню (15:00);</li>
	<li>
		Узерин-гах&nbsp;&mdash; от 3 часов по полудню ( в 15:00) до заката(в <?php echo date_sunset(time(), SUNFUNCS_RET_STRING, 59.56, 30.15, 90.583333, 4); ?>)*;</li>
	<li>
		Аивисрутрим-гах&nbsp;&mdash; от заката (в <?php echo date_sunset(time(), SUNFUNCS_RET_STRING, 59.56, 30.15, 90.583333, 4); ?>)* до полуночи (24:00);</li>
	<li>
		Ушахин-гах.&nbsp;&mdash; от полуночи ( в 24:00) до рассвета ( в <?php echo date_sunrise(time(), SUNFUNCS_RET_STRING, 59.56, 30.15, 90.583333, 4); ?>)*;</li>
*/
return $st;
}
