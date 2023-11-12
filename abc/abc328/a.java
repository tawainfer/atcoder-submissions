// https://atcoder.jp/contests/abc328/submissions/47518884

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = stdIn.nextInt();

    int[] s = new int[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
      s[i] = stdIn.nextInt();
      if(s[i] <= x) {
        sum += s[i];
      }
    }

    System.out.print(sum);
  }
}

