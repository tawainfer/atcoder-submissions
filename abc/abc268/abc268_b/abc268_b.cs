using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = Console.ReadLine();

    bool ans = true;
    if(s.Length > t.Length)
    {
      ans = false;
    }

    for(int i = 0; i < s.Length; i++)
    {
      if(i >= t.Length)
      {
        break;
      }

      if(s[i] != t[i])
      {
        ans = false;
        break;
      }
    }

    if(ans)
    {
      Console.WriteLine("Yes");
    }
    else
    {
      Console.WriteLine("No");
    }
  }
}
