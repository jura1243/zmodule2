<?php
function zmodule2date(){
global $language;

$dayofmounthname_ru=array(
"Ахура-Мазда",
 "Вохуман",
 "Аша-Вахишта",
 "Шахревар",
 "Спента Армаити",
 "Хаурват",
 "Амертат",
 "День перед Атаром (Хварна)",
 "Атар",
 "Апам-Напат",
 "Хоршед",
 "Мах",
 "Тиштрия",
 "Геуш-Урван",
 "День перед Митрой (Ардвисура-Анахита)",
 "Митра",
 "Сраоша",
 "Рашну",
 "Фраваши",
 "Вертрагна",
 "Раман",
 "Вата",
 "День перед Даэной (Вайю)",
 "Даэна",
 "Арта",
 "Арштад",
 "Асман",
 "Зем",
 "Мантраспента",
 "Анагран",
 );

$dayofmounthname=array(
"Hormazd",
"Bahman",
"Ardibehesht",
"Shehrevar",
"Aspandard",
"Khordad",
"Amardad",
"Dae-Pa-Adar",
"Adar",
"Avan",
"Khorshed",
"Mohor",
"Tir",
"Gosh",
"Dae-Pa-Meher",
"Meher",
"Srosh",
"Rashne",
"Fravardin",
"Behram",
"Ram",
"Govad",
"Dae-Pa-Din",
"Din",
"Ashishvangh",
"Ashtad",
"Asman",
"Zamyad",
"Mareshpand",
"Aneran",
);

$dayofmounthdescr_en=array(
"(Av. Ahura Mazda)	The Lord of Wisdom, Zarathushtra's name for God",
"(Av. Vohu Mano)	Good Mind or Purpose. Presides over animals.",
"(Av. Asha Vahishta)	Highest Asha. Presides over fire.",
"(Av. Khshathra Vairya)	'Desirable Dominion'. Presides over metals.",
"(Av. Spenta Armaiti)	Holy (or Beneficent) Devotion. Presides over the Earth.",
"(Av. Haurvatat)	Wholeness (Perfection or Health). Presides over the waters. ",
"(Av. Ameretat)	Immortality or Life. Presides over plants.",

"(Av. Dadvah)	The Creator's day before Adar.",
"(Av. Atar)	Fire",
"(Av. Aban)	Waters",
"(Av. Hvar Khshaeta)	The Shining Sun",
"(Av. Mah)	The Moon",
"(Av. Tishtrya)	The Star Sirius, brightest star in the heavens",
"(Av. Geush)	Sentient Life or the Ox-Soul",

"(Av. Dadvah)	The day of the Creator before Mithra",
"(Av. Mithra)	Yazad of the Contract",
"(Av. Sraosha)	Yazad of 'Hearkening', i.e. paying attention",
"(Av. Rashnu)	Yazad of Truth",
"(Av. Fravashis)	The Guardian Angels",
"(Av. Verethraghna)	Victory, Triumph over evil",
"(Av. Raman)	Peace, Joy",
"(Av. Vata)	Wind, atmosphere",

"(Av. Dadvah)	The day of the Creator before Den",
"(Av. Daena)	Religion, also Inner Self or Conscience",
"(Av. Ashi)	Blessings or Rewards",
"(Av. Arshtat)	Rectitude, Justice",
"(Av. Asman)	Sky",
"(Av. Zam)	Earth",
"(Av. Mathra Spenta) 	Holy Word (Manthra), also specific sections of scripture with certain poetic and spiritual properties",
"(Av. Anaghra Raocha)	Endless Light"
);

$dayofmounthdescr_ru=array(
 "(Ав. Ахура Мазда)    Владыка Мудрости, имя  Бога, используемое Заратуштрой",
 "(Ав. Воху Мано)    Благой Ум. Покровитель благих животных",
 "(Ав. Аша Вахишта)    Наивысшая Аша. Покровитель огня",
 "(Ав. Кшатра Варья)    'Желанная Власть'. Покровитель металлов",
 "(Ав. Спента Армаити)    Святое Благочестие. Покровитель Земли",
 "(Ав. Хаурватат)    Цельность (Целостность или Здоровье). Покровитель вод",
 "(Ав. Амеретат)    Бессмертие или Жизнь. Покровитель растений",

 "(Ав. Дадвах)    День Создателя перед днем Атара",
 "(Ав. Атар)    Огонь",
 "(Ав. Абан)    Воды",
 "(Ав. Хвар Хшаета)    Сияющее Солнце",
 "(Ав. Мах)    Луна",
 "(Ав. Тиштрия)    Звезда Сириус, ярчайшая звезда небес",
 "(Ав. Геуш)    Разумная Жизнь  или Душа Быка",

 "(Ав. Дадвах)    День Создателя перед днем Митры",
 "(Ав. Митра)    Язат Договора",
 "(Ав. Сраоша)    Язат 'Послушания', то есть уделения внимания",
 "(Ав. Рашну)    Язат Истины",
 "(Ав. Фраваши)    Ангелы-Хранители",
 "(Ав. Вертрагна)    Победа, Триумф над дьяволом",
 "(Ав. Раман)    Мир, Радость",
 "(Ав. Вата)    Ветер, атмосфера",

 "(Ав. Дадвах)    День Создателя перед днем Даэны",
 "(Ав. Даэна)    Религия, также Внутреннее 'Я' или Совесть",
 "(Ав. Аши)    Благословения или Награды",
 "(Ав. Арштат)    Честность, Справедливость",
 "(Ав. Асман)    Небо",
 "(Ав. Зем)    Земля",
 "(Ав. Мантра Спента)     Святое Слово (Мантра), а также некоторые
письмена  с духовными и поэтическими свойствами",
 "(Ав. Анагра Раоча)    Бесконечный Свет"
 );


$weekdescr_ru=array(
 "Семь первых дней прославляют Ахура Мазду и Амеша Спента,
 (Бессмертных Святых) иногда называемых Архангелами. Они - наивысшие
духовные создания Ахура Мазды.",
 "Вторая неделя прославляет Свет и Природу: ",
 "Третья неделя прославляет моральные качества: ",
 "Четвертая неделя прославляет религиозные понятия: "
 );

$weekdescr_en=array(
"The first seven days celebrate Ahura Mazda and the Amesha Spentas, (lit. Beneficent Immortals) sometimes called the Archangels. They are the highest spiritual beings created by Ahura Mazda.",
"The second week celebrates LIGHT and NATURE: ",
"The third week celebrates moral qualities: ",
"The fourth week celebrates religious ideas: "
);

$monthname_ru=array(
 "Фраваши",
 "Аша-Вахишты",
 "Хаурвата",
 "Тиштрии",
 "Амертата",
 "Шахревара",
 "Митры",
 "Апам-Напата",
 "Атара",
 "Даэны",
 "Вохумана",
 "Спента-Армаити"
 );

$monthname=array(
"Fravardin",
"Ardibehesht",
"Khordad",
"Tir",
"Amardad",
"Shehrevar",
"Meher",
"Avan",
"Adar",
"Dae",
"Bahman",
"Aspandard"
);

$gathadays=array(
//before Navroz, last 5 days
"Ahunavaiti",
"Ushtavaiti",
"Spentamainyu",
"Vohuxshathra",
"Vahishtoishti",
"Avardaadsaalgaah"
);

 $gathadays_ru=  ["Ахунаваити",
 "Уштаваити",
 "Спентаманью",
 "Вохухшатра",
 "Вахиштоишти",
 "Авардадсалгах"
];

$watchesoftheday_en=array(
//Watches (gahs) of the day:
"Hawan (sunrise to noon)",
"Rapithwin or Second Hawan (noon to 3 p.m.)",
"Uzerin (3 p.m. to sunset)",
"Aiwisruthrem (sunset to midnight)",
"Ushahin (midnight to sunrise)"
);

$msg_en=array(
//   0     1       2         3          4						5               6                                   7                              8
    "day","month","year ZRE","Details","Day begins with sunrise in St.-Petersburg at: ","Next day at: ","The calendar is under development","Zarathushtrian Religious Era","Gathas days"
);

$msg_ru=array(
    "день", "месяц","год ЗРЭ","Подробнее","День начался с восходом солнца в Санкт-Петербурге в: ","Завтрашний день начнется в: ","Календарь в разработке"," Заратуштрийской Религиозной Эры","Дни Гат"
);

//$st=$st.'<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />';
//$st=$st."<noindex>";
$startyear=2009;    $startzreyear=3747;
date_default_timezone_set('Europe/Moscow');

$tm_current=time();
//$tm_current=mktime(date("G"), date("i"), date("s"), date("m")  , date("d"), date("Y"));
//$tm_current=mktime(15, 0, date("s"), date("m")-3  , date("d")+3, date("Y"));	//31 decembre
//$tm_current=mktime(date("G")+10, date("i"), date("s"), date("m")-1  , //date("d")+21, date("Y"));
//$st=$st.strftime("day is: %T %d.%m.%Y<br>", $tm_current);

//last of february (28,29)
$lastday = date("d",mktime(0, 0, 0, 4, -31, date("Y",$tm_current)) );
//if($lastday==29) {}
//$st=$st.$lastday;

$offsetnumyear=date("Y",$tm_current)-$startyear;
//$st=$st.$day."!".$month."!".$offsetnumyear."<br>";

if($tm_current>mktime(0, 0, 0, 03, 21, date("Y",$tm_current)) ){
    $tm_noruz=mktime(0, 0, 0, 03, 21, date("Y",$tm_current));
}else{
    $tm_noruz=mktime(0, 0, 0, 03, 21, date("Y",$tm_current)-1);
	$offsetnumyear=$offsetnumyear-1;	//to prevent +1 year from 01.01 to 21.03
}

//,$tm_current
$tm_today0 = mktime(0, 0, 0, date("m",$tm_current)  , date("d",$tm_current), date("Y",$tm_current)); //begin of the day
//$st=date("d.m.Y H:i:s",$tm_today0);
//$st=$st."tm_today=".$st, "<br>time()=".date("d.m.Y H:i:s",time());

$ptm_timediff=$tm_today0-$tm_noruz;
//$st=$st.$tm_today0."!".$tm_noruz."!".$ptm_timediff."=";

$ptm_oneyear=mktime(0, 0, 0, date("m")  , date("d"), date("Y")+1)-mktime(0, 0, 0, date("m")  , date("d"), date("Y"));
$year=intval($ptm_timediff/$ptm_oneyear)+$startzreyear;

$ptm_oneday=mktime(0, 0, 0, date("m")  , date("d")+1, date("Y"))-mktime(0, 0, 0, date("m")  , date("d"), date("Y"));
//86400;
//$st=$st.$ptm_oneday."!";
$ptm_onehour=mktime(1, 0, 0, date("m")  , date("d"), date("Y"))-mktime(0, 0, 0, date("m")  , date("d"), date("Y"));
$ptm_oneminute=mktime(0, 1, 0, date("m")  , date("d"), date("Y"))-mktime(0, 0, 0, date("m")  , date("d"), date("Y"));

$ptm_onemonth=$ptm_oneday*30;
//$st=$st.$ptm_oneday."!".$ptm_onemonth."<br>";
$month= intval($ptm_timediff/$ptm_onemonth);

//summer time
$summertime=0;
if( ( $tm_today0>mktime(0, 0, 0, 3, 28, date("Y")) ) and ($tm_today0<mktime(0, 0, 0, 10, 25, date("Y")) ) ){
    $summertime=1;
//    $ptm_timediff=$ptm_timediff-$ptm_onehour;
}

//sunrise, latitude 59.56 or 59.55
$latitude=59.56;    $longitude=30.15;
$zenith= ini_get("date.sunrise_zenith");    //90.583333
$gmt_offset=3;

$tm_sunrise= date_sunrise($tm_today0, SUNFUNCS_RET_TIMESTAMP, $latitude, $longitude, $zenith, $gmt_offset);

$ptm_timediff=$ptm_timediff+( $tm_sunrise-$tm_today0 );

$day=intval(($ptm_timediff-($month*$ptm_onemonth))/$ptm_oneday);

//next year
//$lengathasdays=5;
$year=$offsetnumyear+$startzreyear;

if ($tm_current<$tm_sunrise ){	//to sunrise shift
}else{  //>=
}//sunrise shift

if($day==30){
$day=0; $month=$month+1;
}

/*
if ($tm_current<$tm_sunrise){   //??
    if($day==0){
        if($month==0){  //before navruz
            $year=$year-1;  $month=12;
            if($lastday==29) {  //leap year
                $day=5;
            }else {
                $day=4;
            }
        }else{
            $day=30;    $month=$month-1;
        }
    }else{
        $day=$day-1;
    }
}else{  //>=
    if($day==30){
//$st=$st."hello";
        if($month<11){
            $month=$month+1;    $day=0;
        }
    }
}*/

$week=0;
if($day<7){
    $week=0;
}elseif ($day<14){
    $week=1;
}elseif ($day<22){
    $week=2;
}else{
    $week=3;
}

//$language->language='ru';
$st="";
if( $language->language=='en') {
    if($month==12){ //last 5 days
        $st=$st.$msg_en[8].",<br>";
        $st=$st.strval($day+1)." ".$gathadays[$day]." Gatha ".$msg_en[0].".<br>";
        $st=$st.strval($year)." ".$msg_en[2]."<br><br>";
    }else{

        $st=$st.sprintf("%02s",$day+1)." ".$dayofmounthname[$day]." ".$msg_en[0].".<br>";
        $st=$st.sprintf("%02s",$month+1)." ".$monthname[$month]." ".$msg_en[1].".<br>";
        $st=$st.strval($year)." ".$msg_en[2]."<br><br>";
//$st=$st.$weekdescr_en[$week]."<br \><br \>";
        $st=$st.$dayofmounthname[$day]." ".$msg_en[0]." ".$dayofmounthdescr_en[$day].".<br><br>";
//    $st=$st." <a href=http://zoroastrian.ru/node/58>".$msg_en[3]."..</a><br \><br \>";

    }//12
    if ($tm_current>$tm_sunrise){
        $st=$st.$msg_en[4] .date_sunrise($tm_today0, SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
        $st=$st.$msg_en[5] .date_sunrise(mktime(0, 0, 0, date("m")  , date("d")+1, date("Y")), SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
    }else{
        $st=$st.$msg_en[4] .date_sunrise(mktime(0, 0, 0, date("m")  , date("d")-1, date("Y")), SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
        $st=$st.$msg_en[5] .date_sunrise($tm_today0, SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
    }
}else{  //ru

    if($month==12){ //last 5 days
        $st=$st.$msg_ru[8].",<br>";
        $st=$st.strval($day+1)." ".$gathadays_ru[$day]." Гата ".$msg_ru[0].".<br>";
        $st=$st.strval($year)." ".$msg_ru[2]."<br><br>";
    }else{

        $st=$st.sprintf("%02s",$day+1)." ".$dayofmounthname_ru[$day]." ".$msg_ru[0].".<br>";
        $st=$st.sprintf("%02s",$month+1)." ".$monthname_ru[$month]." ".$msg_ru[1].".<br>";
        $st=$st.strval($year)." ".$msg_ru[2]."<br><br>";
//$st=$st.$weekdescr_ru[$week]."<br \><br \>";
        $st=$st.$dayofmounthname_ru[$day]." ".$msg_ru[0]." ".$dayofmounthdescr_ru[$day].".<br><br>";
//    $st=$st." <a href=http://zoroastrian.ru/node/58>".$msg_ru[3]."..</a><br \><br \>";

    }//12
    if ($tm_current>$tm_sunrise){
        $st=$st.$msg_ru[4] .date_sunrise($tm_today0, SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
        $st=$st.$msg_ru[5] .date_sunrise(mktime(0, 0, 0, date("m")  , date("d")+1, date("Y")), SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
    }else{
        $st=$st.$msg_ru[4] .date_sunrise(mktime(0, 0, 0, date("m")  , date("d")-1, date("Y")), SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
        $st=$st.$msg_ru[5] .date_sunrise($tm_today0, SUNFUNCS_RET_STRING, $latitude, $longitude, $zenith, $gmt_offset)."<br>";
    }
}//ru
//$st=$st."</noindex>";
return $st;
}