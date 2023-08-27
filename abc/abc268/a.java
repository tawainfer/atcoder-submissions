// https://atcoder.jp/contests/abc268/submissions/44994035

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] cnt = new int[101];
    for(int i = 0; i < 101; i++) {
      cnt[i] = 0;
    }

    for(int i = 0; i< 5; i++) {
      cnt[stdIn.nextInt()]++;
    }

    int ans = 0;
    for(int i = 0; i < 101; i++) {
      if(cnt[i] != 0) {
        ans++;
      }
    }

    System.out.println(ans);
  }
}
