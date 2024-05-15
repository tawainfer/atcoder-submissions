import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();
    char[] t = new char[n];

    boolean flag = false;
    for(int i = n - 1; i >= 0; i--) {
      if(s.charAt(i) == '.') flag = true;
      t[i] = (flag ? '.' : s.charAt(i));
    }

    for(char c : t) {
      if(c != '.') System.out.print(c);
    }
  }
}