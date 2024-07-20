using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    if(s == "RSM" || s == "RMS" || s == "SRM")
    {
      WriteLine("Yes");
    }
    else
    {
      WriteLine("No");
    }
  }
}
