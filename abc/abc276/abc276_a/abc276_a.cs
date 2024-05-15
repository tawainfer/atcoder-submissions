class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    int ans = -1;

    for(int i = 0; i < s.Length; i++)
    {
      if(s[i] == 'a')
      {
        ans = i + 1;
      }
    }

    Console.Write(ans);
  }
}
