using AtCoder;

using static System.Console;



public class Program

{

    public static void Main()

    {

        long n = long.Parse(ReadLine()!);

        bool?[] isPrime = new bool?[1000009];

        for (int i = 0; i < isPrime.Length; i++)

        {

            isPrime[i] = null;

        }

        isPrime[1] = false;



        for (int i = 2; i < isPrime.Length; i++)

        {

            if (isPrime[i] is null)

            {

                isPrime[i] = true;

            }



            for (int j = i * 2; j < isPrime.Length; j += i)

            {

                isPrime[j] = false;

            }

        }



        HashSet<long> ans = new();

        for (long i = 0; i < isPrime.Length; i++)

        {

            long x = i * i * i * i * i * i * i * i;

            if (x > n) break;

            if (isPrime[i] == true)

            {

                ans.Add(x);

            }

        }



        List<long> primes = new();

        for (int i = 2; i < isPrime.Length; i++)

        {

            if (isPrime[i] == true)

            {

                primes.Add(i);

            }

        }



        for (int i = 0; i < primes.Count; i++)

        {

            for (int j = i + 1; j < primes.Count; j++)

            {

                double d = (double)primes[i] * primes[i] * primes[j] * primes[j];

                if (d > n) break;

                long x = primes[i] * primes[i] * primes[j] * primes[j];

                if (x > n) break;

                ans.Add(x);

            }

        }



        WriteLine(ans.Count);

    }

}