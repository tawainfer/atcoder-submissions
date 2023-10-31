// https://atcoder.jp/contests/abc249/submissions/47099213

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    boolean check = false;
    for(int i = 0; i < n; i++) {
      if(s.charAt(i) < 'a') {
        check = true;
        break;
      }
    }

    if(!check) {
      System.out.println("No");
      System.exit(0);
    }

    check = false;
    for(int i = 0; i < n; i++) {
      if('Z' < s.charAt(i)) {
        check = true;
        break;
      }
    }

    if(!check) {
      System.out.println("No");
      System.exit(0);
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(i == j) continue;
        if(s.charAt(i) == s.charAt(j)) {
          System.out.println("No");
          System.exit(0);
        }
      }
    }

    System.out.println("Yes");
  }
}
