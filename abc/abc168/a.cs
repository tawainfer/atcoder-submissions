// https://atcoder.jp/contests/abc168/submissions/46676739

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    char c = s[s.Length - 1];

    if(c == '3')
    {
      Console.Write("bon");
      return;
    }

    char[] ptn = {'0', '1', '6', '8'};
    foreach(char p in ptn)
    {
      if(c == p)
      {
        Console.Write("pon");
        return;
      }
    }

    Console.Write("hon");
  }
}

