import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int m = stdIn.nextInt();
    int h = stdIn.nextInt();

    if(h % m == 0) System.out.println("Yes");
    else System.out.println("No");
  }
}