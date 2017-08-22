using System;
 
class RandomNumberCheck
{
    static void Main()
    {
        Random rnd = new Random();
        int a = rnd.Next(0, 100);
        Console.WriteLine(a);
 
        if (a % 2==0)
        {
            Console.WriteLine("Even");
        }
        else
        {
            Console.WriteLine("Odd");
        }
    }
}
