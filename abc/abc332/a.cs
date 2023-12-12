// https://atcoder.jp/contests/abc332/submissions/48443721

using static System.Console;

public class A
{
  static void Main()
  {
    int[] t = ReadLine().Split().Select(int.Parse).ToArray();
    int n = t[0];
    int s = t[1];
    int k = t[2];
    
    int ans = 0;
    for(int _ = 0; _ < n; _++)
    {
      t = ReadLine().Split().Select(int.Parse).ToArray();
      int p = t[0];
      int q = t[1];
      ans += p * q;
    }

    if(ans < s)
    {
      ans += k;
    }

    Write(ans);
  }
}

