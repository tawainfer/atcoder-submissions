import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();

    if(n % 2 == 0) {
      System.out.println(n);
    } else {
      System.out.println(n * 2);
    }
  }
}