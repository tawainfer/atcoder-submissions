// https://atcoder.jp/contests/abc352/submissions/53138403

import java.util.*;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    int x = stdIn.nextInt();
    int y = stdIn.nextInt();
    int z = stdIn.nextInt();

    if(x > y) {
      int t = x;
      x = y;
      y = t;
    }

    System.out.print(x <= z && z < y ? "Yes" : "No");
  }
}

