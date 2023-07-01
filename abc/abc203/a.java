// https://atcoder.jp/contests/abc203/submissions/42992895

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[3];
    for(int i = 0; i < 3; i++) {
      a[i] = stdIn.nextInt();
    }

    if(a[0] == a[1] && a[1] == a[2]) {
      System.out.println(a[0]);
    } else {
      for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
          if(i != j && a[i] == a[j]) {
            System.out.println(a[(3 - (i + j)) % 3]);
            System.exit(0);
          }
        }
      }

      System.out.println(0);
    }
  }
}
