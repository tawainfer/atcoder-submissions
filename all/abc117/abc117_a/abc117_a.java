import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    double t = stdIn.nextInt();
    double x = stdIn.nextInt();
    
    System.out.println(t / x);
  }
}