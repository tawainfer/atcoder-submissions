// https://atcoder.jp/contests/abc206/submissions/46938207

class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    
    int day = 0;
    int sum = 0;
    while(sum < n)
    {
      day++;
      sum += day;
    }

    Console.Write(day);
  }
}

