// https://atcoder.jp/contests/abc280/submissions/43238770

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int h = stdIn.nextInt();
    int w = stdIn.nextInt();

    String[] f = new String[h];
    for(int i = 0; i < h; i++) f[i] = stdIn.next();

    int ans = 0;
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        if(f[i].charAt(j) == '#') {
          ans++;
        }
      }
    }

    System.out.println(ans);
  }
}
