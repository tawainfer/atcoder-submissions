// https://atcoder.jp/contests/abc337/submissions/49642735

using static System.Console;
using System.Text.RegularExpressions;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    Write(Regex.IsMatch(s, "^A*B*C*$") ? "Yes" : "No");
  }
}

