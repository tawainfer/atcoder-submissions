using AtCoder;
using static System.Console;

public class Program
{
    public static void Main()
    {
        int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        (int n, int r) = (buf[0], buf[1]);

        for (int i = 0; i < n; i++)
        {
            buf = ReadLine()!.Split().Select(int.Parse).ToArray();
            (int d, int a) = (buf[0], buf[1]);

            if (d == 1 && r >= 1600 && r <= 2799 || d == 2 && r >= 1200 && r <= 2399)
            {
                r += a;
            }
        }

        WriteLine(r);
    }
}
