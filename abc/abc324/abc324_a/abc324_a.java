import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = stdIn.nextInt();
    }

    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        if(a[i] != a[j]) {
          System.out.print("No");
          System.exit(0);
        }
      }
    }

    System.out.print("Yes");
  }
}