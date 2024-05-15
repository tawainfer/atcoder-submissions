using static System.Console;
using System.Linq;

public class A
{
  static void Main()
  {
    int[] t = ReadLine().Split().Select(int.Parse).ToArray();
    int b = t[0];
    int g = t[1];
    WriteLine(b > g ? "Bat" : "Glove");
  }
}
