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
    $st=""; $stpraynamecur=""; $stpraynamenext="";
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
        $stpraynamecur=t("Ушахин-гах");        $stpraynamenext=t("Хаван-гах");
    }
    elseif ($dtcur->getTimestamp()< $dtrapitvingah->getTimestamp() ) {
        $dtpray=$dtrapitvingah;            
        $dtprayend=new DateTime($dthavangah->format('Y-m-d H:i:sP'), $tz);
        $stpraynamecur=t("Хаван-гах");        $stpraynamenext=t("Рапитвин-гах");
    }
    elseif ($dtcur->getTimestamp()< $dtuseringah->getTimestamp() ) {
        $dtpray=$dtuseringah;            
        $dtprayend=new DateTime($dtrapitvingah->format('Y-m-d H:i:sP'), $tz);
        $stpraynamecur=t("Рапитвин-гах");        $stpraynamenext=t("Узерин-гах");
    }
    elseif ($dtcur->getTimestamp()< $dtaivisrutgah->getTimestamp() ) {
        $dtpray=$dtaivisrutgah;            
        $dtprayend=new DateTime($dtuseringah->format('Y-m-d H:i:sP'), $tz);
        $stpraynamecur=t("Узерин-гах");        $stpraynamenext=t("Аивисрутрим-гах");
    }
    elseif ($dtcur->getTimestamp()< $dtushahingah->getTimestamp() ) {
        $dtpray=$dtushahingah;            
        $dtprayend=new DateTime($dtaivisrutgah->format('Y-m-d H:i:sP'), $tz);
        $stpraynamecur=t("Аивисрутрим-гах");        $stpraynamenext=t("Ушахин-гах");
    }
    $dtprayend->add($interval);

    if ( ($dtcur->getTimestamp()<$dtprayend->getTimestamp()) ) {
        $st=$st."Сейчас время молитвы ".$stpraynamecur."!<br>";
        $st2="Следующая молитва ";
    }else{
        $di=$dtcur->diff($dtpray);
        $st=$st."Времени осталось до молитвы  ".$di->h.":".$di->i." часов.<br>";
        $st2="Молитва ";
    }
    $st=$st.$st2.$stpraynamenext." будет в ". $dtpray->format("H:i")." часов.<br>";
        
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

return $st;
}
