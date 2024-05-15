import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int v = stdIn.nextInt();
    int t = stdIn.nextInt();
    int s = stdIn.nextInt();
    int d = stdIn.nextInt();
    
    if(v * t <= d && d <= v * s) {
      System.out.println("No");
    } else {
    System.out.println("Yes");
    }
  }
}