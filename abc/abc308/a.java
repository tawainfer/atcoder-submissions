// https://atcoder.jp/contests/abc308/submissions/43169125

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int[] s = new int[8];
    for(int i = 0; i < 8; i++) s[i] = stdIn.nextInt();

    boolean ans = true;
    for(int i = 0; i < 8; i++) {
      if(!(100 <= s[i] && s[i] <= 675)) ans = false;
      if(s[i] % 25 != 0) ans = false;
      if(i > 0 && s[i - 1] > s[i]) ans = false;
    }

    System.out.println(ans ? "Yes" : "No");
  }
}
