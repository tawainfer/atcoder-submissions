using AtCoder;
using static System.Console;

public class Program
{
    public static void Main()
    {
        int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        int n = buf[0];
        int d = buf[1];
        string s = ReadLine()!;

        WriteLine(s.Count((c) => c == '.') + d);
    }
}
