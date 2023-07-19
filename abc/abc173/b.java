// https://atcoder.jp/contests/abc173/submissions/43760832

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] cnt = new int[4];
    for(int i = 0; i < 4; i++) cnt[i] = 0;

    String[] ptn = {"AC", "WA", "TLE", "RE"};
    for(int i = 0; i < n; i++) {
      String s = stdIn.next();
      
      for(int j = 0; j < 4; j++) {
        if(s.equals(ptn[j])) {
          cnt[j]++;
          break;
        }
      }
    }

    System.out.printf("AC x %d\n", cnt[0]);
    System.out.printf("WA x %d\n", cnt[1]);
    System.out.printf("TLE x %d\n", cnt[2]);
    System.out.printf("RE x %d\n", cnt[3]);
  }
}

