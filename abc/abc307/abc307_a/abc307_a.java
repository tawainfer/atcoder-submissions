import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[7 * n];
    for(int i = 0; i < 7 * n; i++) a[i] = stdIn.nextInt();

    int cnt = 0;
    int sum = 0;

    for(int i = 0; i < a.length; i++) {
      cnt++;
      sum += a[i];

      if(cnt == 7) {
        System.out.printf("%d ", sum);
        cnt = 0;
        sum = 0;
      }
    }
  }
}