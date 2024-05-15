import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String[] s = new String[n];
    int[] t = new int[n];
    for(int i = 0; i < n; i++) {
      s[i] = stdIn.next();
      t[i] = stdIn.nextInt();
    }
    String x = stdIn.next();

    int ans = 0;
    boolean check = false;

    for(int i = 0; i < n; i++) {
      if(check) ans += t[i];
      if(x.equals(s[i])) check = true;
    }

    System.out.println(ans);
  }
}