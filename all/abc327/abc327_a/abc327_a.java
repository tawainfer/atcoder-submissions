import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    for(int i = 1; i < s.length(); i++) {
      char c = s.charAt(i - 1);
      char d = s.charAt(i);

      if(c == 'a' && d == 'b' || c == 'b' && d == 'a') {
        System.out.print("Yes");
        System.exit(0);
      }
    }

    System.out.print("No");
  }
}
