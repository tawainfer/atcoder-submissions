// https://atcoder.jp/contests/abc257/submissions/43714411

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = stdIn.nextInt();

    char[] ptn = new char[26 * n];
    for(int i = 0; i < 26; i++) {
      for(int j = 0; j < n; j++) {
        ptn[i * n + j] = (char)(i + 65);
      }
    }

    System.out.println(ptn[x - 1]);
  }
}
