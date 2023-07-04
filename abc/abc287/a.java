// https://atcoder.jp/contests/abc287/submissions/43237996

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s[] = new String[n];
    for(int i = 0; i < n; i++) s[i] = stdIn.next();

    int agree = 0;
    for(int i = 0; i < n; i++) {
      if(s[i].charAt(0) == 'F') {
        agree++;
      }
    }

    if(agree >= (n + 1) / 2) System.out.println("Yes");
    else System.out.println("No");
  }
}
