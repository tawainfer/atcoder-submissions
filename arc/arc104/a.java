// https://atcoder.jp/contests/arc104/submissions/41617859

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    final int INF = 309;
    for(int x = -INF; x < INF; x++) {
      for(int y = -INF; y < INF; y++) {
        if(x + y == a && x - y == b) {
          System.out.println(x + " " + y);
        }
      }
    }
  }
}
