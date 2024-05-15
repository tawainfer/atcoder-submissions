import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int m = stdIn.nextInt();
    int p = stdIn.nextInt();

    int cd = m;
    int ans = 0;
    while(cd <= n) {
      ans++;
      cd += p;
    }

    System.out.println(ans);
  }
}