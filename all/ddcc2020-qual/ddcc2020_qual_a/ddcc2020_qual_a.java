import java.util.Scanner;

class Main {
  static int max(int x, int y) {
    return (x > y ? x : y);
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int y = stdIn.nextInt();

    int ans = max(4 - x, 0) * 100000 + max(4 - y, 0) * 100000;
    if(x == y && x == 1) ans += 400000;
    System.out.println(ans);
  }
}