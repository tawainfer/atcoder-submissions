// https://atcoder.jp/contests/abc337/submissions/49642931

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    Pattern p = Pattern.compile("^A*B*C*$");
    Matcher m = p.matcher(s);

    System.out.print(m.find() ? "Yes" : "No");
  }
}