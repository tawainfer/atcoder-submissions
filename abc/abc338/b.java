// https://atcoder.jp/contests/abc338/submissions/49754185

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();

    int[] cnt = new int[26];
    for(int i = 0; i < s.length(); i++) {
      cnt[s.charAt(i) - 97]++;
    }

    int max_cnt = 0;
    char ans = '?';
    for(int i = 0; i < cnt.length; i++) {
      if(max_cnt < cnt[i]) {
        max_cnt = cnt[i];
        ans = (char)('a' + i);
      }
    }

    System.out.print(ans);
  }
}
