import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    for(int i = 0; i < n; i++) {
      int t = stdIn.nextInt();
      if(t % 2 == 0) System.out.printf("%d ", t);
    }
  }
}