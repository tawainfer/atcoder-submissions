// https://atcoder.jp/contests/abc344/submissions/51110919

using static System.Console;

public class A
{
  static void Main()
  {
    List<int> ans = new();
    int x;
    do {
      x = int.Parse(ReadLine());
      ans.Add(x);
    } while(x != 0);

    for(int i = ans.Count() - 1; i >= 0; i--) {
      WriteLine(ans[i]);
    }
  }
}

