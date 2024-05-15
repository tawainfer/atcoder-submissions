import java.util.Scanner;

class Main {
  static int max(int x, int y) {
    return (x > y ? x : y);
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int l1 = stdIn.nextInt();
    int r1 = stdIn.nextInt();
    int l2 = stdIn.nextInt();
    int r2 = stdIn.nextInt();

    int cnt = 0;
    for(int i = l1; i <= r1; i++) {
      if(l2 <= i && i <= r2) {
        cnt++;
      }
    }

    System.out.println(max(cnt - 1, 0));
  }
}