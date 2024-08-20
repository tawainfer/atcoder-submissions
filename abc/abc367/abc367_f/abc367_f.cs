using static System.Console;

public class Program
{
    static void Main()
    {
        var buf = ReadLine()!.Split().Select(long.Parse).ToArray();
        long n = buf[0];
        long q = buf[1];

        var a = ReadLine()!.Split().Select(long.Parse).ToList();
        var b = ReadLine()!.Split().Select(long.Parse).ToList();

        Dictionary<long, long> hash = new();
        for (int i = 1; i <= n; i++)
        {
            hash[i] = new Random().NextInt64(1L << 60);
        }

        var ra = new List<long>() { 0, };
        var rb = new List<long>() { 0, };
        foreach (long x in a) ra.Add(ra.Last() + hash[x]);
        foreach (long x in b) rb.Add(rb.Last() + hash[x]);

        for (int _ = 0; _ < q; _++)
        {
            buf = ReadLine()!.Split().Select(long.Parse).ToArray();
            (int l, int r, int L, int R) = ((int)buf[0], (int)buf[1], (int)buf[2], (int)buf[3]);
            WriteLine(ra[r] - ra[l - 1] == rb[R] - rb[L - 1] ? "Yes" : "No");
        }
    }
}
