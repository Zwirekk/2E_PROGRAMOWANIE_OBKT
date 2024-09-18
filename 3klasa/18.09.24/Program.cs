using System;

namespace dupa
{
    class Program
    {
        public static void Main(string[] args)
        {
            //1
            float pi = float.Pi;

            //2
            string dane = "Filip Wira";

            //3
            int x = 10;
            float y = (float)x;

            //4
            double a = 10.78493;
            int b = Convert.ToInt32(a);

            //5
            Console.WriteLine("Podaj napis: ");
            string napis = Console.ReadLine();
            Console.WriteLine("Twoj napis: " + napis);
        }
    }
}

