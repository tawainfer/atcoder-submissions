// https://atcoder.jp/contests/abc344/submissions/51111026

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] ans = new int[100];
    for(int i = 0; i < 100; i++) {
      ans[i] = stdIn.nextInt();
      
      if(ans[i] == 0) {
        for(int j = i; j >= 0; j--) {
          System.out.println(ans[j]);
        }
        break;
      }
    }
  }
}
