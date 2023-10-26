// https://atcoder.jp/contests/abc218/submissions/46938169

class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int[] p = new int[26];
    for(int i = 0; i < 26; i++)
    {
      p[i] = int.Parse(t[i]);
      Console.Write((char)(96 + p[i]));
    }
  }
}

