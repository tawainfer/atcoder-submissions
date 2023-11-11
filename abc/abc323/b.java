// https://atcoder.jp/contests/abc323/submissions/47439370

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] cnt = new int[n];
    for(int i = 0; i < n; i++) {
      cnt[i] = 0;
    }

    String[] s = new String[n];
    for(int i = 0; i < n; i++) {
      s[i] = stdIn.next();
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(s[i].charAt(j) == 'o') {
          cnt[i]++;
        }
      }
    }

    for(int i = n; i >= 0; i--) {
      for(int j = 0; j < n; j++) {
        if(cnt[j] == i) {
          System.out.printf("%d ", j + 1);
        }
      }
    }
  }
}

