import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();
    int a = stdIn.nextInt() - 1;
    int b = stdIn.nextInt() - 1;

    for(int i = 0; i < n; i++) {
      if(i == a) System.out.print(s.charAt(b));
      else if(i == b) System.out.print(s.charAt(a));
      else System.out.print(s.charAt(i));
    }
  }
}