using static System.Console;

class A
{
  static void Main() {
    string[] t = ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int l = int.Parse(t[1]);

    string[] a = ReadLine().Split(" ");
    
    int ans = 0;
    for(int i = 0; i < a.Length; i++)
    {
      if(int.Parse(a[i]) >= l)
      {
        ans++;
      }
    }

    WriteLine(ans);
  }
}
