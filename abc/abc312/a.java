// https://atcoder.jp/contests/abc312/submissions/44091439

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    String[] ptn = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

    for(int i = 0; i < ptn.length; i++) {
      if(s.equals(ptn[i])) {
        System.out.println("Yes");
        System.exit(0);
      }
    }

    System.out.println("No");
  }
}
