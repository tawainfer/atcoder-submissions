import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }

    long ans = 0;
    int r = 0;
    for(int l = 0; l < n; l++) {
      while(r < n) {
        if(r >= l + 2 && a[r] - a[r - 1] != a[r - 1] - a[r - 2]) break;
        r++;
      }
      ans += r - l;
    }

    System.out.println(ans);
  }
}