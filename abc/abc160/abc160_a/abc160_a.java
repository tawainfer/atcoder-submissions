import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    boolean ans = true;
    for(int i = 2; i < 6; i += 2) {
      if(s.charAt(i) != s.charAt(i + 1)) {
        ans = false;
      }
    }

    System.out.println(ans ? "Yes" : "No");
  }
}