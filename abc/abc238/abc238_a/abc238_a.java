import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    if(n == 1 || n > 4) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}