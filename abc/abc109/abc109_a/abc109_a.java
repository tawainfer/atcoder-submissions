import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    for(int c = 1; c <= 3; c++) {
      if(a * b * c % 2 != 0) {
        System.out.println("Yes");
        System.exit(0);
      }
    }

    System.out.println("No");
  }
}