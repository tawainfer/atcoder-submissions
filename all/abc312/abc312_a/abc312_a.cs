class A {
  static void Main() {
    string s = Console.ReadLine();
    string[] ptn = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

    foreach(string t in ptn)
    {
      if(s == t)
      {
        Console.WriteLine("Yes");
        return;
      }
    }

    Console.WriteLine("No");
  }
}
