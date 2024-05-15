import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();

    int ans = 0;
    for(int i = 0; i < n; i++) {
      if(i % 2 == 0 && a[i] % 2 != 0) {
        ans++;
      }
    }

    System.out.println(ans);
  }
}