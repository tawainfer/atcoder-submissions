import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String a = stdIn.next();
    String b = stdIn.next();

    int sa = 0;
    int sb = 0;

    for(int i = 0; i < a.length(); i++) {
      sa += a.charAt(i) - 48;
    }

    for(int i = 0; i < b.length(); i++) {
      sb += b.charAt(i) - 48;
    }

    if(sa >= sb) {
      System.out.println(sa);
    } else {
      System.out.println(sb);
    }
  }
}