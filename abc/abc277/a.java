// https://atcoder.jp/contests/abc277/submissions/43238053

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = stdIn.nextInt();

    int[] p = new int[n];
    for(int i = 0; i < n; i++) p[i] = stdIn.nextInt();

    for(int i = 0; i < n; i++) {
      if(p[i] == x) {
        System.out.println(i + 1);
        break;
      }
    }
  }
}
