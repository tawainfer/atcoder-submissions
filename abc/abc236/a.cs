// https://atcoder.jp/contests/abc236/submissions/46503218

using System;

public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    char[] t = new char[s.Length];
    for(int i = 0; i < s.Length; i++) {
      t[i] = s[i];
    }

    string[] z = Console.ReadLine().Split(" ");
    int a = int.Parse(z[0]);
    int b = int.Parse(z[1]);
    a--;
    b--;

    char c = t[a];
    t[a] = t[b];
    t[b] = c;

    for(int i = 0; i < t.Length; i++) {
      Console.Write(t[i]);
    }
  }
}

