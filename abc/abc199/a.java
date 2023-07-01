// https://atcoder.jp/contests/abc199/submissions/40777971

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();

    if(a * a + b * b < c * c) System.out.println("Yes");
    else System.out.println("No");
  }
}
