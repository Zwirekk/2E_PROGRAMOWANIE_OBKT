<html>
<head>
    <title> Zadania </title>
    <meta charset="UTF-8">
</head>
<body>
    <?php
        echo "Zadanie 1 <br><br>";
        $StopnieC = (integer)5;
        $StopnieF = $StopnieC * 1.8 + 32;
        $StopnieF = <<<SF
            stopnie Fahrenheita wnoszą: $StopnieF
        SF;
        echo $StopnieF . '<br>';
        $StopnieC = (float)15.5;
        $StopnieF = $StopnieC * 1.8 + 32;
        $StopnieF = <<<SF
            stopnie Fahrenheita wnoszą: $StopnieF
        SF;
        echo $StopnieF;
        echo "<br><br> Zadanie 2 <br><br>";
        $liczba1 = 20;
        $liczba2 = 20;
        $dodawanie = "+";
        $odejmowanie = "-";
        $mnozenie = "*";
        $dzielenie = "/";
        $rowna = "=";
        $wynik1 = $liczba1 + $liczba2;
        $wynik2 = $liczba1 - $liczba2;
        $wynik3 = $liczba1 * $liczba2;
        $wynik4 = $liczba1 / $liczba2;
        echo "$liczba1 $dodawanie $liczba2 $rowna $wynik1 <br>";
        echo "$liczba1 $odejmowanie $liczba2 $rowna $wynik2 <br>";
        echo "$liczba1 $mnozenie $liczba2 $rowna $wynik3 <br>";
        echo "$liczba1 $dzielenie $liczba2 $rowna $wynik4 <br>";
        echo "<br> Zadanie 3 <br><br>";
        $promien = 10;
        echo (pi()*($promien*$promien));
        echo "<br><br> Zadanie 4 <br><br>";
        $wiek = 13;
        $Dni = $wiek * 365;
        $wiekDni = <<<WD
            Wiek podany w dniach: $Dni
        WD;
        echo $wiekDni;
        echo "<br><br> Zadanie 5 <br><br>";
        $s = (string)'k';
        $i = (integer)14;
        $f = (float)3.5;
        $b = (boolean)true;
        echo $s . '<br>' . $i . '<br>' . $f . '<br>' . $b . '<br>';
        $s = (integer)1312;
        $i = (string)'kj';
        $f = (boolean)true;
        $b = (float)132.42;
        echo '<br>'. $s . '<br>' . $i . '<br>' . $f . '<br>' . $b . '<br>';

        echo "<br> Zadanie 6 <br><br>";
        $liczba3 = (string)15;
        $liczba4 = (string)10;
        $liczba3 = (integer)$liczba3;
        $liczba4 = (integer)$liczba4;
        $wynik5 = $liczba3 + $liczba4;
        $wynik6 = $liczba3 - $liczba4;
        $wynik7 = $liczba3 * $liczba4;
        $wynik8 = $liczba3 / $liczba4;
        echo $wynik5 . '<br>' . $wynik6 . '<br>' . $wynik7 . '<br>' . $wynik8 . '<br>';
        echo "<br> Zadanie 7 <br><br>";
        $imie = 'Karol';
        $nazwisko = 'Ziaja';
        echo $imie .'<br>'. $nazwisko . '<br>';
        $imie_duze = strtoupper($imie);
        $nazwisko_duze = strtoupper($nazwisko);
        echo $imie_duze . '<br>' . $nazwisko_duze . '<br>';
        $imie_male = strtolower($imie);
        $nazwisko_male = strtolower($nazwisko);
        echo $imie_male . '<br>' . $nazwisko_male . '<br>';
        $imie_mieszane = strrev($imie);
        $nazwisko_mieszane = strrev($nazwisko);
        echo $imie_mieszane . '<br>' . $nazwisko_mieszane . '<br>';
        $imie_dlugosc = strlen($imie);
        $nazwisko_dlugosc = strlen($nazwisko);
        echo $imie_dlugosc . '<br>' . $nazwisko_dlugosc . '<br>';
        echo "<br> Zadanie 8 <br><br>";
        $waga = (integer)80;
        $wzrost = (integer)2;
        $bmi = $waga / ($wzrost*$wzrost);
        echo $bmi . '<br>';
        echo "<br> Zadanie 9 <br><br>";
        $droga = (float)100;
        $predkosc = (float)40;
        $czas = $droga / $predkosc;
        echo $czas . '<br>';
        echo "<br> Zadanie 10 <br><br>";
        define("EURO", 4.5);
        $waluta_w_zl = 100;
        $waluta_w_euro = $waluta_w_euro / EURO;
        echo $waluta_w_euro . '<br>';


    ?>
</body>
</html>
