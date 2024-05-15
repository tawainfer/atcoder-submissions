import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    boolean ans = false;

    for(int i = a; i <= b; i++) {
      if(100 % i == 0) {
        ans = true;
      }
    }

    if(ans) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}