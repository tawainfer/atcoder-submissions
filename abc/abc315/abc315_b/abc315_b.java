import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int m = stdIn.nextInt();
    int[] d = new int[m + 1];
    d[0] = 0;

    for(int i = 1; i <= m; i++) {
      d[i] = d[i - 1] + stdIn.nextInt();
    }

    int mid = d[m] / 2 + 1;
    for(int i = 1; i <= m; i++) {
      if(mid <= d[i]) {
        System.out.printf("%d %d", i, mid - d[i - 1]);
        break;
      }
    }
  }
}