import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    for(int i = 0; i <= 9; i++) {
      for(int j = 0; j <= 9; j++) {
        for(int k = 0; k <= 9; k++) {
          if(i * j == k && i * 100 + j * 10 + k >= n) {
            System.out.printf("%d%d%d", i, j, k);
            System.exit(0);
          }
        }
      }
    }
  }
}