using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    bool ans = true;

    for(int i = 0; i < s.Length; i++)
    {
      if(i % 2 == 0 && s[i] < 'a')
      {
        ans = false;
      }

      if(i % 2 != 0 && s[i] > 'Z')
      {
        ans = false;
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
