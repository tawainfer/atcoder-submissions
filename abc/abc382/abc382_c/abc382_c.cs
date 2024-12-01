using AtCoder;
using static System.Console;

public class Program
{
    public static void Main()
    {
        int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        int n = buf[0];
        int m = buf[1];
        var a = ReadLine()!.Split().Select(int.Parse).ToList();
        var b = ReadLine()!.Split().Select(int.Parse).ToList();

        int[] c = new int[200009];
        for (int i = 0; i < 200009; i++)
        {
            c[i] = int.MaxValue;
        }

        for (int i = 0; i < n; i++)
        {
            c[a[i]] = Math.Min(i, c[a[i]]);
        }

        for (int i = 1; i < 200009; i++)
        {
            if (c[i - 1] < c[i])
            {
                c[i] = c[i - 1];
            }
        }

        foreach (var x in b)
        {
            WriteLine(c[x] == int.MaxValue ? -1 : c[x] + 1);
        }
    }
}
