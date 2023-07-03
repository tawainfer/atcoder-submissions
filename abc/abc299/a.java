// https://atcoder.jp/contests/abc299/submissions/43211780

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    boolean in = false;
    for(int i = 0; i < n; i++) {
      char c = s.charAt(i);
      if(c == '|') in = !in;
      if(c == '*') {
        System.out.println(in ? "in" : "out");
        break;
      }
    }
  }
}
