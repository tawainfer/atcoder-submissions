import java.util.*;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    String s = sc.next();
    String t = sc.next();
    System.out.print(s.equals("AtCoder") && t.equals("Land") ? "Yes" : "No");
  }
}