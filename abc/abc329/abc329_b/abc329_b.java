import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];

    for(int i = 0; i < n; i++) {
      a[i] = stdIn.nextInt();
    }
    Arrays.sort(a);

    for(int i = a.length - 1; i >= 0; i--) {
      if(a[a.length - 1] != a[i]) {
        System.out.println(a[i]);
        break;
      }
    }
  }
}
