// https://atcoder.jp/contests/abc177/submissions/43246738

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int d = stdIn.nextInt();
    int t = stdIn.nextInt();
    int s = stdIn.nextInt();
    
    if(s * t >= d) System.out.println("Yes");
    else System.out.println("No");
  }
}
