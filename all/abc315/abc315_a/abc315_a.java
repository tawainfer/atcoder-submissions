import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    char[] ptn = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i < s.length(); i++) {
      boolean check = true;
      for(int j = 0; j < ptn.length; j++) {
        if(s.charAt(i) == ptn[j]) {
          check = false;
          break;
        }
      }

      if(check) {
        System.out.print(s.charAt(i));
      }
    }
  }
}