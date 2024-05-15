import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int d = stdIn.nextInt();

    int[] t = new int[n];
    for(int i = 0; i < n; i++) t[i] = stdIn.nextInt();

    boolean check = false;
    for(int i = 1; i < n; i++) {
      if(t[i] - t[i - 1] <= d) {
        System.out.println(t[i]);
        System.exit(0);
      }
    }

    System.out.println(-1);
  }
}