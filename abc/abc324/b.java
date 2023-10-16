// https://atcoder.jp/contests/abc324/submissions/46652134

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    long n = stdIn.nextLong();
    
    while(n % 2 == 0) {
      n /= 2;
    }

    while(n % 3 == 0) {
      n /= 3;
    }

    System.out.println(n == 1 ? "Yes" : "No");
  }
}
