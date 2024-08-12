using static System.Console;

public class A
{
    public static List<int> MakeGoodList(int n, int k)
    {
        var res = new List<int>();

        void Recursion(int x, int cnt, ref List<int> res)
        {
            if (cnt == 0)
            {
                return;
            }

            if ((x & (1 << (k - 1))) != 0)
            {
                for (int i = 0; i < cnt; i++)
                {
                    res.Add(x);
                }
                return;
            }

            // WriteLine($"{(x << 1)} <---> {(x << 1) + 1}");
            Recursion((x << 1), cnt / 2, ref res);
            Recursion((x << 1) + 1, cnt - cnt / 2, ref res);
        }
        Recursion(1, n, ref res);

        return res;
    }

    public static void Main()
    {
        int t = int.Parse(ReadLine());
        for (int _ = 0; _ < t; _++)
        {
            var buf = ReadLine().Split().Select(int.Parse).ToArray();
            int n = buf[0];
            int k = buf[1];
            WriteLine(string.Join(' ', MakeGoodList(n, k)));
        }
    }
}
