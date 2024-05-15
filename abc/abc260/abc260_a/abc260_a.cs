using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    Dictionary<char, int> d = new();

    foreach(char c in s)
    {
      if(!d.ContainsKey(c))
      {
        d.Add(c, 1);
      }
      else
      {
        d[c]++;
      }
    }

    for(char c = 'a'; c <= 'z'; c++)
    {
      if(d.ContainsKey(c) && d[c] == 1)
      {
        WriteLine(c);
        return;
      }
    }

    WriteLine(-1);
  }
}
