// https://atcoder.jp/contests/abc253/submissions/47099178

import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();

    int[] v = new int[3];
    v[0] = a;
    v[1] = b;
    v[2] = c;
    Arrays.sort(v);

    if(b == v[1]) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
