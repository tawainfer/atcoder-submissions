using static System.Console;

public class Program
{
    static void Main()
    {
        var buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        (int n, int k) = (buf[0], buf[1]);

        var p = new int[n + 1];
        for (int i = 2; i <= n; i++)
        {
            if (p[i] != 0) continue;
            for (int j = i; j <= n; j += i)
            {
                p[j]++;
            }
        }

        int ans = p.Where((x) => x >= k).Count();
        WriteLine(ans);
    }
}
