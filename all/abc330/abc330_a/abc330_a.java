import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int l = stdIn.nextInt();

    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = stdIn.nextInt();
    }

    int ans = 0;
    for(int i = 0; i < a.length; i++) {
      if(a[i] >= l) {
        ans++;
      }
    }

    System.out.println(ans);
  }
}