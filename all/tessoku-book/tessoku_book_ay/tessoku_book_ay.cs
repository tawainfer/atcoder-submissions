using static System.Console;

public class A
{
  static void Main()
  {
    int q = int.Parse(ReadLine());

    var st = new Stack<string>();
    for(int _ = 0; _ < q; _++)
    {
      string[] t = ReadLine().Split();
      if(t.Length == 2) {
        st.Push(t[1]);
      } else {
        if(t[0] == "2") {
          WriteLine(st.Peek());
        } else if(t[0] == "3") {
          st.Pop();
        }
      }
    }
  }
}
