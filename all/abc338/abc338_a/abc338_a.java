import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    Pattern p = Pattern.compile("^[A-Z][a-z]*$");
    Matcher m = p.matcher(s);

    System.out.print(m.find() ? "Yes" : "No");
  }
}