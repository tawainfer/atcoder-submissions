import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    double a = stdIn.nextInt();
    double b = stdIn.nextInt();
    
    System.out.println(a / 100 * b);
  }
}