// https://atcoder.jp/contests/abc345/submissions/51362161

using System.Text.RegularExpressions;
using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    Write(Regex.IsMatch(s, "^<=+>$") ? "Yes" : "No");
  }
}

