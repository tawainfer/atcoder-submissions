// https://atcoder.jp/contests/abc296/submissions/46937807

class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string s = Console.ReadLine();

    for(int i = 1; i < s.Length; i++)
    {
      if(s[i - 1] == s[i])
      {
        Console.Write("No");
        return;
      }
    }

    Console.Write("Yes");
  }
}

