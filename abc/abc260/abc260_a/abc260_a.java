import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int[] cnt = new int[26];

    for(int i = 0; i < s.length(); i++) {
      cnt[(int)(s.charAt(i) - 'a')]++;
    }

    for(int i = 0; i < cnt.length; i++) {
      if(cnt[i] == 1) {
        System.out.print((char)(i + 97));
        System.exit(0);
      }
    }

    System.out.print(-1);
  }
}
