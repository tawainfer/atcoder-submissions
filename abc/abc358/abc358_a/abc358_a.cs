using static System.Console;

public class A
{
  static void Main()
  {
    string[] a = ReadLine().Split();
    string s = a[0];
    string t = a[1];
    Write(s == "AtCoder" && t == "Land" ? "Yes" : "No");
  }
}
