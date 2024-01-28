// https://atcoder.jp/contests/abc338/submissions/49753829

using static System.Console;
using System.Text.RegularExpressions;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    Write(Regex.IsMatch(s, "^[A-Z][a-z]*$") ? "Yes" : "No");
  }
}
