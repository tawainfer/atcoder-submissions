import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(a >= 13) System.out.println(b);
    else if(a >= 6) System.out.println(b / 2);
    else System.out.println(0);
  }
}