class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    int ans = 0;

    for(int i = 0; i < s.Length - 3; i++)
    {
      if(s[i] == 'Z' && s[i + 1] == 'O' && s[i + 2] == 'N' && s[i + 3] == 'e')
      {
        ans++;
      }
    }

    Console.WriteLine(ans);
  }
}
