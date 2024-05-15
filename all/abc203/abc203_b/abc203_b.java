import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int k = stdIn.nextInt();

    int ans = 0;
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= k; j++) {
        ans += i * 100 + j;
      }
    }

    System.out.println(ans);
  }
}