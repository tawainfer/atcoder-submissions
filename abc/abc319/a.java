// https://atcoder.jp/contests/abc319/submissions/45429301

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    
    String[] name = {
      "tourist",
      "ksun48",
      "Benq",
      "Um_nik",
      "apiad",
      "Stonefeang",
      "ecnerwala",
      "mnbvmar",
      "newbiedmy",
      "semiexp"
    };

    int[] rating = {
      3858,
      3679,
      3658,
      3648,
      3638,
      3630,
      3613,
      3555,
      3516,
      3481
    };

    for(int i = 0; i < 10; i++) {
      if(s.equals(name[i])) {
        System.out.print(rating[i]);
      }
    }
  }
}
