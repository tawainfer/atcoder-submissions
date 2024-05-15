import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    int ans = 0;
    for(int i = 0; i < 2; i++) {
      if(a > b) {
        ans += a;
        a--;
      } else {
        ans += b;
        b--;
      }
    }

    System.out.println(ans);
  }
}