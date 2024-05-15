import java.util.Scanner;

class Main {
  static int max(int a, int b) {
    return (a > b ? a : b);
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);
    String s = stdIn.next();

    int ans = 0;
    for(int i = 0; i < s.length(); i++) {
      for(int j = i; j < s.length(); j++) {
        int len = j - i + 1;
        boolean check = true;

        for(int k = 0; k < len; k++) {
          if(s.charAt(i + k) != (s.charAt(j - k))) {
            check = false;
            break;
          }
        }

        if(check) {
          ans = max(ans, len);
        }
      }
    }

    System.out.println(ans);
  }
}
