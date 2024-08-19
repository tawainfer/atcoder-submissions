using static System.Console;

public class Program
{
    static void Main()
    {
        long n = int.Parse(ReadLine()!);
        var a = ReadLine()!.Split().Select(long.Parse).ToList();
        var b = ReadLine()!.Split().Select(long.Parse).ToList();

        Dictionary<long, long> table = new();
        foreach (long x in a)
        {
            table[x] = new Random().NextInt64(1L << 60);
        }
        foreach (long x in b)
        {
            table[x] = new Random().NextInt64(1L << 60);
        }

        List<long> sa = new() { 0, };
        List<long> sb = new() { 0, };
        HashSet<long> ma = new();
        HashSet<long> mb = new();

        for (int i = 0; i < n; i++)
        {
            if (ma.Contains(a[i]))
            {
                sa.Add(sa.Last());
            }
            else
            {
                ma.Add(a[i]);
                sa.Add(sa.Last() ^ table[a[i]]);
            }

            if (mb.Contains(b[i]))
            {
                sb.Add(sb.Last());
            }
            else
            {
                mb.Add(b[i]);
                sb.Add(sb.Last() ^ table[b[i]]);
            }
        }

        long q = int.Parse(ReadLine()!);
        for (int i = 0; i < q; i++)
        {
            var buf = ReadLine()!.Split().Select(int.Parse).ToArray();
            int x = buf[0];
            int y = buf[1];
            WriteLine(sa[x] == sb[y] ? "Yes" : "No");
        }
    }
}
