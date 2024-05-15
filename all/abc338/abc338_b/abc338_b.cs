using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    int[] cnt = new int[26];
    for(int i = 0; i < cnt.Length; i++)
    {
      cnt[i] = 0;
    }

    foreach(char c in s)
    {
      cnt[c - 'a']++;
    }

    int max_cnt = 0;
    char ans = '?';
    for(int i = 0; i < cnt.Length; i++)
    {
      if(max_cnt < cnt[i])
      {
        ans = (char)('a' + i);
        max_cnt = cnt[i];
      }
    }

    Write(ans);
  }
}
