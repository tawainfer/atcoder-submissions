class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    for(int i = 0; i < s.Length; i++)
    {
      Console.Write(s[i] == '0' ? '1' : '0');
    }
  }
}
