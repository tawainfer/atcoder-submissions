// https://atcoder.jp/contests/abc280/submissions/46673454

class A {
  static void Main() {
    string[] t = Console.ReadLine().Split(" ");
    int h = int.Parse(t[0]);
    int w = int.Parse(t[1]);

    int ans = 0;
    for(int i = 0; i < h; i++)
    {
      string s = Console.ReadLine();
      for(int j = 0; j < s.Length; j++)
      {
        if(s[j] == '#')
        {
          ans++;
        }
      }
    }

    Console.WriteLine(ans);
  }
}

