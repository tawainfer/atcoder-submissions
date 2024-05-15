import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] cnt = new int[1009];
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = stdIn.nextInt();
      cnt[a[i]]++;
    }
    
    for(int i = 1; i <= n; i++) {
      if(cnt[i] != 1) {
        System.out.println("No");
        System.exit(0);
      }
    }

    System.out.println("Yes");
  }
}