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
