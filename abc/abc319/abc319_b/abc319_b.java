import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    for(int i = 0; i <= n; i++) {
      int ans = 0;
      for(int j = 1; j <= 9; j++) {
        if(n % j != 0) continue;
        if(i % (n / j) == 0) {
          ans = j;
          break;
        }
      }

      if(ans != 0) {
        System.out.print(ans);
      } else {
        System.out.print('-');
      }
    }
  }
}