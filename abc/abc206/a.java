// https://atcoder.jp/contests/abc206/submissions/42820271



import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    int s = (int)(1.08 * n);
    
    if(s < 206) System.out.println("Yay!");
    else if(s == 206) System.out.println("so-so");
    else System.out.println(":(");
  }
}
