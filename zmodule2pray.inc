<?php
function zmodule2pray () {
    $tz = new DateTimeZone(variable_get('timezone'));
//    $st=timezone_name_get($tz);
    
//    $dttest=new DateTime("2015-07-10 0:07:00",$tz);
//    $dtcur=$dttest;
    $dtcur=new DateTime("now", $tz);        
    $dtpray=new DateTime("now", $tz);
    $dthavangah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);    $dtrapitvingah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);
    $dtuseringah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);    $dtaivisrutgah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);
    $dtushahingah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);
    
    $gmtoffsettimezonebased=$tz->getOffset($dtcur)/60/60;
//  $dtcur2=$dtcur->modify('+1 hour');
//  $date->format('Y-m-d H:i:sP')
/*    $datestring=$dtcur->format('Y-m-d');
    $timestring="12:00:00";
 * 
 */
    $st="";
    $dthavangah->setTimestamp(date_sunrise($dtcur->getTimestamp(), SUNFUNCS_RET_TIMESTAMP, variable_get('latitude'), variable_get('longtitude'), variable_get('zenith'), $gmtoffsettimezonebased));
    $dtrapitvingah->setTime(12,0,0);
    $dtuseringah->setTime(15,0,0);
    $dtaivisrutgah->setTimestamp(date_sunset($dtcur->getTimestamp(), SUNFUNCS_RET_TIMESTAMP, variable_get('latitude'), variable_get('longtitude'), variable_get('zenith'), $gmtoffsettimezonebased));
    $dtushahingah->setTime(0,0,0);  $dtushahingah->modify("+1 day");

    $interval=new DateInterval('PT5M');

    if ($dtcur->getTimestamp() < $dthavangah->getTimestamp() )  {
        $dtpray=$dthavangah;
        $dtprayend=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);
        $dtprayend->setTime(0,0,0);
    }
    elseif ($dtcur->getTimestamp()< $dtrapitvingah->getTimestamp() ) {
        $dtpray=$dtrapitvingah;            
        $dtprayend=new DateTime($dthavangah->format('Y-m-d H:i:sP'), $tz);
    }
    elseif ($dtcur->getTimestamp()< $dtuseringah->getTimestamp() ) {
        $dtpray=$dtuseringah;            
        $dtprayend=new DateTime($dtrapitvingah->format('Y-m-d H:i:sP'), $tz);
    }
    elseif ($dtcur->getTimestamp()< $dtaivisrutgah->getTimestamp() ) {
        $dtpray=$dtaivisrutgah;            
        $dtprayend=new DateTime($dtuseringah->format('Y-m-d H:i:sP'), $tz);
    }
    elseif ($dtcur->getTimestamp()< $dtushahingah->getTimestamp() ) {
        $dtpray=$dtushahingah;            
        $dtprayend=new DateTime($dtaivisrutgah->format('Y-m-d H:i:sP'), $tz);
    }
    $dtprayend->add($interval);

    if ( ($dtcur->getTimestamp()<$dtprayend->getTimestamp()) ) {
        $st=$st."Сейчас время молитвы!<br>";
        $st2="Следующая молитва";
    }else{
        $di=$dtcur->diff($dtpray);
        $st=$st."Времени осталось до молитвы  ".$di->h.":".$di->i." часов.<br>";
        $st2="Молитва";
    }
    $st=$st.$st2." будет в ". $dtpray->format("H:i")." часов.<br>";
        
//    $st=$st.$gmtoffsettimezonebased;
/*    $st=$st."cur".$dtcur->format('Y-m-d H:i:s')."<br>";
    $st=$st."pray".$dtpray->format('Y-m-d H:i:s')."<br>";
    $st=$st."prayend".$dtprayend->format('Y-m-d H:i:s')."<br>";
    $st=$st.$dthavangah->format('Y-m-d H:i:s')."<br>";
    $st=$st.$dtrapitvingah->format('Y-m-d H:i:s')."<br>";
    $st=$st.$dtuseringah->format('Y-m-d H:i:s')."<br>";
    $st=$st.$dtaivisrutgah->format('Y-m-d H:i:s')."<br>";
    $st=$st.$dtushahingah->format('Y-m-d H:i:s')."<br>";
 * 
 */


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
