// https://atcoder.jp/contests/abc345/submissions/51362183

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    Pattern p = Pattern.compile("^<=+>$");
    Matcher m = p.matcher(s);

    System.out.print(m.find() ? "Yes" : "No");
  }
}
