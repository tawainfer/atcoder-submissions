import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();
    int d = stdIn.nextInt();

    b += 60 * a;
    d += 60 * c;

    if(b <= d) {
      System.out.println("Takahashi");
    } else {
      System.out.println("Aoki");
    }
  }
}