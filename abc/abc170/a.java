// https://atcoder.jp/contests/abc170/submissions/43222231

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] x = new int[5];
    for(int i = 0; i < 5; i++) x[i] = stdIn.nextInt();

    for(int i = 0; i < 5; i++) {
      if(x[i] == 0) {
        System.out.println(i + 1);
        break;
      }
    }
  }
}
