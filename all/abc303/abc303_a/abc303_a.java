import java.util.Scanner;

class Main {
  static char replaceChar(char c) {
    if(c == '1') c = 'l';
    if(c == '0') c = 'o';
    return c;
  }

  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();
    String t = stdIn.next();
    
    for(int i = 0; i < s.length(); i++) {
      char cs = replaceChar(s.charAt(i));
      char ct = replaceChar(t.charAt(i));
      
      if(cs != ct) {
        System.out.println("No");
        System.exit(0);
      }
    }

    System.out.println("Yes");
  }
}