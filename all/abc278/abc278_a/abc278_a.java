import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int k = stdIn.nextInt();

    int[] a = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();

    if(n < k) {
      for(int i = 0; i < n; i++) {
        System.out.print("0 ");
      }
    } else {
      for(int i = 0; i < n - k; i++) {
        System.out.printf("%d ", a[i + k]);
      }

      for(int i = 0; i < k; i++) {
        System.out.print("0 ");
      }
    }
  }
}