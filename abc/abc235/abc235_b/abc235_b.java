import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] h = new int[n + 1];
    for(int i = 0; i < n; i++) h[i] = stdIn.nextInt();
    h[n] = -1;

    for(int i = 0; i < n; i++) {
      if(h[i] >= h[i + 1]) {
        System.out.println(h[i]);
        break;
      }
    }
  }
}