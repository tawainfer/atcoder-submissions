import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int r = stdIn.nextInt();
    int d = stdIn.nextInt();
    int[] x = new int[2023];
    for(int i = 0; i < 2023; i++) x[i] = 0;
    x[2000] = stdIn.nextInt();

    for(int i = 2001; i <= 2010; i++) {
      x[i] = r * x[i - 1] - d;
      System.out.println(x[i]);
    }
  }
}