// https://atcoder.jp/contests/abc223/submissions/40778009

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int x = stdIn.nextInt();

    if(x % 100 == 0 && x != 0) System.out.println("Yes");
    else System.out.println("No");
  }
}
