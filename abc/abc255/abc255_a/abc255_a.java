import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int r = stdIn.nextInt() - 1;
    int c = stdIn.nextInt() - 1;

    int[][] a = new int[2][2];
    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
        a[i][j] = stdIn.nextInt();
      }
    }

    System.out.println(a[r][c]);
  }
}