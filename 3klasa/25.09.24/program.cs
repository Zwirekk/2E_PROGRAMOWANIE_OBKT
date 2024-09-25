using System;

namespace Program
{
    class Program
    {
        public static void Main(string[] arg)
        {
            
               //1
               Console.WriteLine("Witaj swiecie!");

               //2
               Console.WriteLine("Podaj imie");
               string Imie = Console.ReadLine();
               Console.WriteLine("Cześć " + Imie);

               //3
               Console.WriteLine("Podaj 1 liczbe");
               string liczba1 = Console.ReadLine();
               Console.WriteLine("Podaj 2 liczbe");
               string liczba2 = Console.ReadLine();

               int liczba1Con = Convert.ToInt32(liczba1);
               int liczba2Con = Convert.ToInt32(liczba2);

               int suma = liczba1Con + liczba2Con;
               Console.WriteLine("Suma tych liczb to " + suma);

               //4

               Console.WriteLine("Podaj promien kola");
               double promien = Convert.ToDouble(Console.ReadLine());
               double pi = Math.PI;
               double pole = pi * (promien * promien);
               Console.WriteLine("Pole kola to: " + pole);

               //5

               Console.WriteLine("Podaj temperature w stopniach Celcjusza");
               double C = Convert.ToDouble(Console.ReadLine());
               double F = (C * 9 / 5) + 32;
               Console.WriteLine("Temperatura w stopniach Fahrenheita to: " + F);

               //6


               Console.WriteLine("Podaj liczbe");
               int liczba = Convert.ToInt32(Console.ReadLine());
               string liczbaCon = Convert.ToString(liczba);
               Console.WriteLine(liczbaCon);

               //7

               Console.WriteLine("Podaj 1 liczbe");
               double liczba1 = Convert.ToDouble(Console.ReadLine());
               Console.WriteLine("Podaj 2 liczbe");
               double liczba2 = Convert.ToDouble(Console.ReadLine());
               double srednia = (liczba1 + liczba2) / 2;
               Console.WriteLine("Srednia tych liczb to: " + srednia);

               //8

               Console.WriteLine("Podaj liczbe: ");
               double liczba = Convert.ToDouble(Console.ReadLine());
               double kwadrat = liczba * liczba;
               Console.WriteLine("Kwadrat tej liczby to: " + kwadrat);

               //9

                Console.WriteLine("Podaj liczbe zmiennoprzecinkowa: ");
                double liczbaZmienno = Convert.ToDouble(Console.ReadLine());
                int liczbaCon = Convert.ToInt32(liczbaZmienno);
                Console.WriteLine("Przekonwertowana liczba to: " + liczbaCon);
        }

    }
}
