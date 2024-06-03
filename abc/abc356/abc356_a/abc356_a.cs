using static System.Console;

public class A
{
  static void Main()
  {
    int[] t = ReadLine().Split().Select(int.Parse).ToArray();
    int n = t[0];
    int l = t[1];
    int r = t[2];

    var a = new List<int>();
    var b = new List<int>();
    for(int i = 1; i <= n; i++) {
      a.Add(i);
      if(l <= i && i <= r) {
        b.Add(i);
      }
    }

    for(int i = 1; i <= n; i++) {
      if(l <= i && i <= r) {
        Write($"{b.Last()} ");
        b.RemoveAt(b.Count - 1);
      } else {
        Write($"{a[i - 1]} ");
      }
    }
  }
}
