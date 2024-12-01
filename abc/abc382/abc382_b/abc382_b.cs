using AtCoder;
using static System.Console;

public class Program
{
    public static void Main()
    {
        int[] buf = ReadLine()!.Split().Select(int.Parse).ToArray();
        int n = buf[0];
        int d = buf[1];
        char[] t = ReadLine()!.ToCharArray();

        for (int i = t.Length - 1; i >= 0; i--)
        {
            if (d <= 0) break;
            if (t[i] == '@')
            {
                t[i] = '.';
                d--;
            }
        }

        WriteLine(string.Join("", t));
    }
}
