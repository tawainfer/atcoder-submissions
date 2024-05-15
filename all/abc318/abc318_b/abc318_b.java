import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();

    int[][] f = new int[109][109];
    for(int i = 0; i < 109; i++) {
      for(int j = 0; j < 109; j++) {
        f[i][j] = 0;
      }
    }

    for(int k = 0; k < n; k++) {
      int a = stdIn.nextInt();
      int b = stdIn.nextInt();
      int c = stdIn.nextInt();
      int d = stdIn.nextInt();

      for(int i = a; i < b; i++) {
        for(int j = c; j < d; j++) {
          f[i][j]++;
        }
      }
    }

    int ans = 0;
    for(int i = 0; i < 109; i++) {
      for(int j = 0; j < 109; j++) {
        if(f[i][j] >= 1) {
          ans++;
        }
      }
    }

    System.out.println(ans);
  }
}