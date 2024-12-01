using AtCoder;
using static System.Console;

public class Program
{
    public static void Main()
    {
        int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        int n = buf[0];
        int m = buf[1];

        int[] a = new int[n];
        a[0] = 1;
        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + 10;
        }

        int idx = n - 1;
        List<string> ans = new() { string.Join(' ', a) };

        while (true)
        {
            if (idx < 0) break;

            if (a[idx] + 1 > m - (n - idx - 1) * 10)
            {
                idx--;
                continue;
            }
            else
            {
                a[idx]++;
                while (idx < n - 1)
                {
                    a[idx + 1] = a[idx] + 10;
                    idx++;
                }

                if (a[idx] > m)
                {
                    break;
                }

                ans.Add(string.Join(' ', a));
            }
        }

        WriteLine(ans.Count);
        foreach(string s in ans) {
            WriteLine(s);
        }
    }
}
