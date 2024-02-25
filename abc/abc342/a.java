// https://atcoder.jp/contests/abc342/submissions/50627292

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int[] cnt = new int[26];
    for(int i = 0; i < 26; i++) {
      cnt[i] = 0;
    }

    for(int i = 0; i < s.length(); i++) {
      cnt[s.charAt(i) - 'a']++;
    }

    for(int i = 0; i < s.length(); i++) {
      if(cnt[s.charAt(i) - 'a'] == 1) {
        System.out.print(i + 1);
        break;
      }
    }
  }
}
