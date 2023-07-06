// https://atcoder.jp/contests/abc301/submissions/43285278

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    String s = stdIn.next();

    int ct = 0;
    int ca = 0;
    for(int i = 0; i < n; i++) {
      if(s.charAt(i) == 'T') {
        ct++;
      } else {
        ca++;
      }

      if(ct == (n + 1) / 2) {
        System.out.println("T");
        System.exit(0);
      } else if(ca == (n + 1) / 2) {
        System.out.println("A");
        System.exit(0);
      }
    }
  }
}
