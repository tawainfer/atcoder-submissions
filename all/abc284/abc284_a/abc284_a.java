import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String[] s = new String[n];
    for(int i = 0; i < n; i++) s[i] = stdIn.next();

    for(int i = n - 1; i >= 0; i--) {
      System.out.println(s[i]);
    }
  }
}