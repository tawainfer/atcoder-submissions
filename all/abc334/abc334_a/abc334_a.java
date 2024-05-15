import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int b = stdIn.nextInt();
    int g = stdIn.nextInt();
    System.out.print(b > g ? "Bat" : "Glove");
  }
}