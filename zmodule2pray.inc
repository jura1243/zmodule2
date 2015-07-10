<?php
function zmodule2pray () {
//    $havangahtime=date_sunrise(time(), SUNFUNCS_RET_STRING, 59.56, 30.15, 90.583333, 3);
    
//    $d1=new DateTime("2012-07-08 11:14:15.638276");
    $tz = new DateTimeZone(variable_get('timezone'));
//    $st=timezone_name_get($tz);
    $dtcur=new DateTime("now", $tz);        $dtpray=new DateTime("now", $tz);
    $dthavangah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);    $dtrapitvingah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);
    $dtuseringah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);    $dtaivisrutgah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);
    $dtushahingah=new DateTime($dtcur->format('Y-m-d H:i:sP'), $tz);
    
    $gmtoffsettimezonebased=$tz->getOffset($dtcur)/60/60;
//  $dtcur2=$dtcur->modify('+1 hour');
//  $date->format('Y-m-d H:i:sP')
/*    $datestring=$dtcur->format('Y-m-d');
    $timestring="12:00:00";
    $st="";
 * 
 */

        
    $dthavangah->setTimestamp(date_sunrise($dtcur->getTimestamp(), SUNFUNCS_RET_TIMESTAMP, variable_get('latitude'), variable_get('longtitude'), variable_get('zenith'), $gmtoffsettimezonebased));
    $dtrapitvingah->setTime(12,0,0);
    $dtuseringah->setTime(15,0,0);
    $dtaivisrutgah->setTimestamp(date_sunset($dtcur->getTimestamp(), SUNFUNCS_RET_TIMESTAMP, variable_get('latitude'), variable_get('longtitude'), variable_get('zenith'), $gmtoffsettimezonebased));
    $dtushahingah->setTime(0,0,0);  $dtushahingah->modify("+1 day");

    if ($dtcur->getTimestamp() < $dthavangah->getTimestamp() )  {
        $dtpray=$dthavangah;
    }
    elseif ($dtcur->getTimestamp()< $dtrapitvingah->getTimestamp() ) {
        $dtpray=$dtrapitvingah;            
    }
    elseif ($dtcur->getTimestamp()< $dtuseringah->getTimestamp() ) {
        $dtpray=$dtuseringah;            
    }
    elseif ($dtcur->getTimestamp()< $dtaivisrutgah->getTimestamp() ) {
        $dtpray=$dtaivisrutgah;            
    }
    elseif ($dtcur->getTimestamp()< $dtushahingah->getTimestamp() ) {
        $dtpray=$dtushahingah;            
    }
    $di=$dtcur->diff($dtpray);
    $st=$st."Времени осталось до молитвы  ".$di->h.":".$di->i."<br>";
    $st=$st."Молитва будет в ". $dtpray->format("H:i");
        
//    $st=$st.$gmtoffsettimezonebased;
/*    $st=$st.$dtcur->format('Y-m-d H:i:s')."<br>";
    $st=$st.$dtpray->format('Y-m-d H:i:s')."<br>";
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
