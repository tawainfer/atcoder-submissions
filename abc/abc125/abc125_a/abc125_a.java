import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int t = stdIn.nextInt();

    int ans = 0;
    for(int i = 1; i <= t; i++) {
      if(i % a == 0) {
        ans += b;
      }
    }

    System.out.println(ans);
  }
}