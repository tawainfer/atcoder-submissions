import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    for(int i = 0; i < n; i++) {
      if(s.charAt(i) <= 'Z') {
        System.out.println(i + 1);
        break;
      }
    }
  }
}