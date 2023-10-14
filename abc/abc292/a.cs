// https://atcoder.jp/contests/abc292/submissions/46503108

using System;

public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    for(int i = 0; i < s.Length; i++) {
      Console.Write((char)(s[i] - 32));
    }
  }
}

