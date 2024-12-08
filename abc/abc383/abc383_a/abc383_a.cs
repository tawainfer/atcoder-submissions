using static System.Console;

public class Program
{
    public static void Main()
    {
        int n = int.Parse(ReadLine()!);
        List<int> t = new();
        List<int> v = new();
        Dictionary<int, int> d = new();
        for (int _ = 0; _ < n; _++)
        {
            int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();
            t.Add(buf[0]);
            v.Add(buf[1]);
            d[buf[0]] = buf[1];
        }

        int sum = 0;
        for (int i = 1; i <= t[n - 1]; i++)
        {
            sum = Math.Max(sum - 1, 0);
            if (d.ContainsKey(i))
            {
                sum += d[i];
            }
        }
        WriteLine(sum);
    }
}
