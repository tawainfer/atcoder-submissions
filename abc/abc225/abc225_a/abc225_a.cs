using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    int[] cnt = new int[26];
    for(int i = 0; i < 26; i++)
    {
      cnt[i] = 0;
    }

    for(int i = 0; i < s.Length; i++)
    {
      cnt[(int)s[i] - 97]++;
    }

    for(int i = 0; i < cnt.Length; i++)
    {
      if(cnt[i] == 3)
      {
        WriteLine(1);
        return;
      }
    }

    for(int i = 0; i < cnt.Length; i++)
    {
      if(cnt[i] == 2)
      {
        WriteLine(3);
        return;
      }
    }

    WriteLine(6);
  }
}
