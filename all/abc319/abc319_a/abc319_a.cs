using System;

public class A
{
  static void Main()
  {
    string[] a = {
      "tourist", "3858",
      "ksun48", "3679",
      "Benq", "3658",
      "Um_nik", "3648",
      "apiad", "3638",
      "Stonefeang", "3630",
      "ecnerwala", "3613",
      "mnbvmar", "3555",
      "newbiedmy", "3516",
      "semiexp", "3481"
    };

    string s = Console.ReadLine();
    for(int i = 0; i < a.Length; i += 2)
    {
      if(s == a[i])
      {
        Console.Write(a[i + 1]);
        return;
      }
    }
  }
}
