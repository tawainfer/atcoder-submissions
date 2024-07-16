using System.Collections.Generic;
using static System.Console;

public class A
{
  static void Main()
  {
    List<int> rgb = ReadLine().Split().Select(int.Parse).ToList();
    string c = ReadLine();

    int idx = c switch
    {
      "Red" => 0,
      "Green" => 1,
      _ => 2,
    };

    rgb.RemoveAt(idx);
    WriteLine(rgb.Min());
  }
}
