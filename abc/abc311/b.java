// https://atcoder.jp/contests/abc311/submissions/43916591

import java.util.Scanner;

class Main {
  static int max(int x, int y) {
    return (x > y ? x : y);
  }

  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int d = stdIn.nextInt();

    int[] cnt = new int[d + 1];
    for(int i = 0; i <= d; i++) cnt[i] = 0;

    for(int i = 0; i < n; i++) {
      String s = stdIn.next();
      
      for(int j = 0; j < d; j++) {
        if(s.charAt(j) == 'o') {
          cnt[j]++;
        }
      }
    }

    int ans = 0;
    int c = 0;
    for(int i = 0; i <= d; i++) {
      if(cnt[i] == n) {
        c++;
      } else {
        ans = max(ans, c);
        c = 0;
      }
    }

    System.out.println(ans);
  }
}
