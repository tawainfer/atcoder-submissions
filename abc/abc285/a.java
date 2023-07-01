// https://atcoder.jp/contests/abc285/submissions/41532943

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(b / 2 == a) System.out.println("Yes");
    else System.out.println("No");
  }
}
