import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    boolean ans = true;
    for(int i = 0; i < n; i++) {
      if(i - 1 >= 0 && s.charAt(i - 1) == s.charAt(i)) ans = false;
      if(i + 1 < n && s.charAt(i) == s.charAt(i + 1)) ans = false;
    }

    System.out.println(ans ? "Yes" : "No");
  }
}