class A {
  static void Main() {
    string s = Console.ReadLine();
    for(int i = 0; i < s.Length; i += 2)
    {
      Console.Write($"{s[i + 1]}{s[i]}");
    }
  }
}
