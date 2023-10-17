// https://atcoder.jp/contests/abc322/submissions/46673361

class A {
  static void Main() {
    int n = int.Parse(Console.ReadLine());
    string s = Console.ReadLine();
    
    for(int i = 0; i < n - 2; i++)
    {
      if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
      {
        Console.WriteLine(i + 1);
        return;
      }
    }

    Console.WriteLine(-1);
  }
}

