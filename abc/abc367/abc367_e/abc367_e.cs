using static System.Console;

public class Program
{
    static void Main()
    {
        var buf = ReadLine()!.Split().Select(long.Parse).ToArray();
        int n = (int)buf[0];
        long k = buf[1];

        var x = ReadLine()!.Split().Select(int.Parse).Select((t) => t - 1).ToList();
        var a = ReadLine()!.Split().Select(int.Parse).ToList();

        List<List<int>> p = new() { x, };
        for (int i = 1; i <= 60; i++)
        {
            p.Add(new());
            for (int j = 0; j < n; j++)
            {
                p[i].Add(p[i - 1][p[i - 1][j]]);
            }
        }

        List<int> q = new();
        for (int i = 0; i < n; i++)
        {
            q.Add(i);
        }

        for (int i = 0; i <= 60; i++)
        {
            if ((k & (1L << i)) != 0)
            {
                for (int j = 0; j < n; j++)
                {
                    q[j] = p[i][q[j]];
                }
            }
        }

        foreach (int i in q)
        {
            Write($"{a[i]} ");
        }
    }
}
