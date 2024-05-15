using static System.Console;

public class A
{
  static void Main()
  {
    int q = int.Parse(ReadLine());

    var que = new Queue<string>();
    for(int _ = 0; _ < q; _++)
    {
      string[] t = ReadLine().Split();
      if(t[0] == "1")
      {
        que.Enqueue(t[1]);
      }
      else if(t[0] == "2")
      {
        WriteLine(que.Peek());
      }
      else if(t[0] == "3")
      {
        que.Dequeue();
      }
    }
  }
}
