using static System.Console;
public class Program
{
    public static void Main(string[] args)
    {
        var buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        (int n, int s) = (buf[0], buf[1]);

        List<int> a = new();
        List<int> b = new();
        for (int i = 0; i < n; i++)
        {
            buf = ReadLine()!.Split().Select(int.Parse).ToArray();
            a.Add(buf[0]);
            b.Add(buf[1]);
        }

        bool[,] dp = new bool[n + 1, s + 1];
        dp[0, 0] = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (!dp[i, j]) continue;
                if (j + a[i] <= s) dp[i + 1, j + a[i]] = true;
                if (j + b[i] <= s) dp[i + 1, j + b[i]] = true;
            }
        }

        if (!dp[n, s])
        {
            WriteLine("Impossible");
            return;
        }

        List<char> ans = new();
        int k = s;
        for (int i = n; i > 0; i--)
        {
            if (k - a[i - 1] >= 0 && dp[i - 1, k - a[i - 1]])
            {
                ans.Add('A');
                k -= a[i - 1];
            }
            else
            {
                ans.Add('B');
                k -= b[i - 1];
            }
        }
        ans.Reverse();

        foreach (char c in ans) Write(c);
    }
}
