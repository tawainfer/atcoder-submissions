import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();

    int max_idx = 0;
    for(int i = 0; i < n; i++) {
      if(a[max_idx] < a[i]) {
        max_idx = i;
      }
    }

    System.out.println(max_idx + 1);
  }
}