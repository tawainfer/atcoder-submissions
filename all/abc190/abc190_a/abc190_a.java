import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();

    final int INF = 10009;
    for(int i = c; i < INF; i++) {
      if(i % 2 == 0) {
        if(a == 0) {
          System.out.println("Aoki");
          break;
        }

        a--;
      } else {
        if(b == 0) {
          System.out.println("Takahashi");
          break;
        }

        b--;
      }
    }
  }
}