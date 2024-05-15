import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int m = stdIn.nextInt();

    String[] s = new String[n];
    for(int i = 0; i < n; i++) {
      s[i] = stdIn.next();
    }

    String[] t = new String[m];
    for(int i = 0; i < m; i++) {
      t[i] = stdIn.next();
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
      boolean check = false;

      for(int j = 0; j < m; j++) {
        if(s[i].charAt(3) == t[j].charAt(0) && s[i].charAt(4) == t[j].charAt(1) && s[i].charAt(5) == t[j].charAt(2)) {
          check = true;
          break;
        }
      }

      if(check) {
        ans++;
      }
    }

    System.out.println(ans);
  }
}
