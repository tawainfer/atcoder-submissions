// https://atcoder.jp/contests/abc206/submissions/41618008

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();

    final int INF = 1000009;
    int sum = 0;

    for(int i = 1; i < INF; i++) {
      sum += i;
      if(sum >= n) {
        System.out.println(i);
        break;
      }
    }
  }
}
