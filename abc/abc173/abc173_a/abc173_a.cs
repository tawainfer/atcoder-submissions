class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    Console.Write(((n + 1000 - 1) / 1000) * 1000 - n);
  }
}
