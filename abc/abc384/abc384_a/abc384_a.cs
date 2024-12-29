using AtCoder;
using static System.Console;

public class Program
{
    public static void Main()
    {
        string[] buf = ReadLine()!.Split();
        int n = int.Parse(buf[0]);
        char c1 = char.Parse(buf[1]);
        char c2 = char.Parse(buf[2]);
        string s = ReadLine()!;

        for(int i = 0; i < s.Length; i++) {
            Write(s[i] == c1 ? c1 : c2);
        }
    }
}
