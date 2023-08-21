// https://atcoder.jp/contests/abc315/submissions/44816302

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    char[] ptn = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i < s.length(); i++) {
      boolean check = true;
      for(char c : ptn) {
        if(s.charAt(i) == c) {
          check = false;
        }
      }

      if(check) {
        System.out.print(s.charAt(i));
      }
    }
  }
}
