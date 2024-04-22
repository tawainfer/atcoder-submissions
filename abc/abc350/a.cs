// https://atcoder.jp/contests/abc350/submissions/52684298

using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    int n = int.Parse(s.Substring(3));
    Write(0 < n && n < 350 && n != 316 ? "Yes" : "No");
  }
}

