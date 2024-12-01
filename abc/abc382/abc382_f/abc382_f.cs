using AtCoder;
using static System.Console;

class Program
{
    static void Main()
    {
        int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();

        (int h, int w, int n) = (buf[0], buf[1], buf[2]);
        var r = new int[n];
        var c = new int[n];
        var l = new int[n];
        List<(int R, int C, int L, int Idx)> v = new();
        for (int i = 0; i < n; i++)
        {
            buf = ReadLine()!.Split().Select(int.Parse).ToArray();
            (r[i], c[i], l[i]) = (buf[0], buf[1], buf[2]);
            v.Add((buf[0], buf[1], buf[2], i));
        }
        v.Sort();
        v.Reverse();

        long[] ans = new long[n];
        var seg = new LazySegtree<long, long, SegtreeOps>(200009);
        foreach ((int R, int C, int L, int Idx) in v)
        {
            seg.Apply(C, C + L, seg.Prod(C, C + L) + 1);
            ans[Idx] = seg.Prod(C, C + L);
        }

        for (int i = 0; i < n; i++)
        {
            WriteLine(h - ans[i] + 1);
        }
    }
}

struct SegtreeOps : ILazySegtreeOperator<long, long>
{
    public long Identity => 0;

    public long FIdentity => long.MaxValue;

    public long Operate(long a, long b) => Math.Max(a, b);

    public long Composition(long f, long g) => f == FIdentity ? g : f;

    public long Mapping(long f, long x) => f == FIdentity ? x : f;
}