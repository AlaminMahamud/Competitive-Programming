using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics.BigInteger;
namespace FACT
{

    class Program
    {
        public static BigInteger fibonacci(BigInteger n)
        {
            if (n == 1) return 1;
            return n * fibonacci(n - 1);
        }

        public static void Program2(int d)
        {
            BigInteger big = fibonacci(d);
            Console.WriteLine(big);
        }

        static void Main()
        {
            // your code here
            int t;
            t = Convert.ToInt32(Console.ReadLine());
            while (t-- > 0)
            {
                Program2(Convert.ToInt32(Console.ReadLine()));
            }
        }
    }
}
