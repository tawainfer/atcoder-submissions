import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int m = stdIn.nextInt();

    boolean[][] check = new boolean[n + 1][n + 1];
    for(int i = 0; i <= n; i++) {
      for(int j = 0; j <= n; j++) {
        check[i][j] = false;
      }
    }

    for(int i = 0; i < m; i++) {
      int[] a = new int[n];
      for(int j = 0; j < n; j++) {
        a[j] = stdIn.nextInt();
      }

      
      for(int j = 0; j < n; j++) {
        for(int k = -1; k <= 1; k += 2) {
          if(0 <= j + k && j + k < n) {
            check[a[j]][a[j + k]] = true;
            check[a[j + k]][a[j]] = true;
          }
        }
      }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
      for(int j = i + 1; j <= n; j++) {
        if(!check[i][j]) {
          ans++;
        }
      }
    }

    System.out.println(ans);
  }
}