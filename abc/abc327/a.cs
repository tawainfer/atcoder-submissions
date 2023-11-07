// https://atcoder.jp/contests/abc327/submissions/47345323

class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string s = Console.ReadLine();

    for(int i = 1; i < s.Length; i++)
    {
      if(s[i - 1] == 'a' && s[i] == 'b' || s[i - 1] == 'b' && s[i] == 'a')
      {
        Console.Write("Yes");
        return;
      }
    }

    Console.Write("No");
  }
}

