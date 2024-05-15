import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int m = stdIn.nextInt();

    int[] a = new int[n];
    int[] b = new int[m];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();
    for(int i = 0; i < m; i++) b[i] = stdIn.nextInt();

    int ans = 0;
    for(int i : b) {
      ans += a[i - 1];
    }

    System.out.println(ans);
  }
}