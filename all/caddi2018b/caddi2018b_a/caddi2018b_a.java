import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();

    int ans = 0;
    for(int i = 0; i < 4; i++) {
      if(s.charAt(i) == '2') {
        ans++;
      }
    }

    System.out.println(ans);
  }
}