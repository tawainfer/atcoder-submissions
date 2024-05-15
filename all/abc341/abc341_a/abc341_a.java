import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    System.out.print("1");
    for(int i = 0; i < n; i++) {
      System.out.print("01");
    }
  }
}