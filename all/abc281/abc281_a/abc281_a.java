import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    while(n >= 0) {
      System.out.println(n);
      n--;
    }
  }
}