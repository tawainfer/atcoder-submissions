class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string[] ptn = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    for(int i = 0; i < 5; i++)
    {
      if(s == ptn[i])
      {
        Console.Write(5 - i);
        return;
      }
    }
  }
}
