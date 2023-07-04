// https://atcoder.jp/contests/abc141/submissions/43246480

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    String[] ptn = {"Sunny", "Cloudy", "Rainy"};

    for(int i = 0; i < 3; i++) {
      if(s.equals(ptn[i])) {
        System.out.println(ptn[(i + 1) % 3]);
        break;
      }
    }
  }
}
