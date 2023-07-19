// https://atcoder.jp/contests/abc152/submissions/43760946

import java.util.Scanner;

class Main {
  static String repeatString(char c, int n) {
    String res = "";
    while(n-- > 0) res += c;
    return res;
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    String s = repeatString((char)(a + 48), b);
    String t = repeatString((char)(b + 48), a);
    a = Integer.parseInt(s);
    b = Integer.parseInt(t);

    if(a < b) {
      System.out.println(b);
    } else {
      System.out.println(a);
    }
  }
}
