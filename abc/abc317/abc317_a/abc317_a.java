import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int h = stdIn.nextInt();
    int x = stdIn.nextInt();

    int[] p = new int[n];
    for(int i = 0; i < n; i++) {
      p[i] = stdIn.nextInt();
      if(h + p[i] >= x) {
        System.out.print(i + 1);
        break;
      }
    }
  }
}