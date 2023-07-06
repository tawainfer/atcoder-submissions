// https://atcoder.jp/contests/abc240/submissions/43285352

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();

    int ans = 0;
    for(int i = 0; i < n; i++) {
      boolean check = true;
      for(int j = i - 1; j >= 0; j--) {
        if(a[i] == a[j]) {
          check = false;
        }
      }

      if(check) {
        ans++;
      }
    }

    System.out.println(ans);
  }
}
