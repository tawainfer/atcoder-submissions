// https://atcoder.jp/contests/abc190/submissions/43547751

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int s = stdIn.nextInt();
    int d = stdIn.nextInt();

    int[] x = new int[n];
    int[] y = new int[n];
    for(int i = 0; i < n; i++) {
      x[i] = stdIn.nextInt();
      y[i] = stdIn.nextInt();
    }

    for(int i = 0; i < n; i++) {
      if(!(x[i] >= s || y[i] <= d)) {
        System.out.println("Yes");
        System.exit(0);
      }
    }

    System.out.println("No");
  }
}
