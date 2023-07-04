// https://atcoder.jp/contests/abc171/submissions/43237863

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    char c = s.charAt(0);

    System.out.println(c <= 'Z' ? 'A' : 'a');
  }
}
