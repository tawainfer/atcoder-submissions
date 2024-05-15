import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    for(int i = n - 1; i >= 0; i--) {
      if(s.charAt(i) == '6') System.out.print('9');
      else if(s.charAt(i) == '9') System.out.print('6');
      else System.out.print(s.charAt(i));
    }
  }
}