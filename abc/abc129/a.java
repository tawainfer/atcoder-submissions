// https://atcoder.jp/contests/abc129/submissions/43760476

import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] p = new int[3];
    for(int i = 0; i < 3; i++) p[i] = stdIn.nextInt();
    Arrays.sort(p);

    System.out.println(p[0] + p[1]);
  }
}
