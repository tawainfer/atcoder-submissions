import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = stdIn.nextInt();

    int[] a = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();

    int sum = 0;
    for(int i = 0; i < n; i++) {
      sum += a[i] + (i % 2 == 0 ? 0 : -1);
    }

    System.out.println(sum <= x ? "Yes" : "No");
  }
}