using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    for(int i = 0; i < s.Length; i++) {
      Write(s[i] + " ");
    }
  }
}
