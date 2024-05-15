import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    
    if((a + b) >= 15 && b >= 8) {
      System.out.println(1);
    } else if((a + b) >= 10 && b >= 3) {
      System.out.println(2);
    } else if((a + b) >= 3) {
      System.out.println(3);
    } else {
      System.out.println(4);
    }
  }
}