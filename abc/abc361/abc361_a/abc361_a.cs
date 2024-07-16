using System.Collections.Generic;
using static System.Console;

public class A
{
  static void Main()
  {
    int[] t = ReadLine().Split().Select(int.Parse).ToArray();
    int n = t[0];
    int k = t[1];
    int x = t[2];

    List<int> a = ReadLine().Split().Select(int.Parse).ToList();
    a.Insert(k, x);
    WriteLine(string.Join(" ", a));
  }
}
