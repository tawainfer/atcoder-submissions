import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int h = stdIn.nextInt();
    int w = stdIn.nextInt();
    
    int min = 100;
    int[][] a = new int[h][w];
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        a[i][j] = stdIn.nextInt();
        if(min > a[i][j]) {
          min = a[i][j];
        }
      }
    }

    int ans = 0;
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        ans += a[i][j] - min;
      }
    }

    System.out.println(ans);
  }
}