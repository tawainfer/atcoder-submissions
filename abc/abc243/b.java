// https://atcoder.jp/contests/abc243/submissions/43761075

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    int[] b = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();
    for(int i = 0; i < n; i++) b[i] = stdIn.nextInt();

    int hit = 0;
    int blow = 0;

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(a[i] == b[j]) {
          if(i == j) hit++;
          else blow++;
          break;
        }
      }
    }

    System.out.println(hit);
    System.out.println(blow);
  }
}
