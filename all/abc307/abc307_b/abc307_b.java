import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String[] s = new String[n];
    for(int i = 0; i < n; i++) {
      s[i] = stdIn.next();
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(i == j) continue;

        char[] t = new char[s[i].length() + s[j].length()];
        for(int k = 0; k < s[i].length(); k++) {
          t[k] = s[i].charAt(k);
        }

        for(int k = 0; k < s[j].length(); k++) {
          t[s[i].length() + k] = s[j].charAt(k);
        }

        boolean check = true;
        for(int k = 0; k < t.length / 2; k++) {
          if(t[k] != t[t.length - 1 - k]) {
            check = false;
            break;
          }
        }

        if(check) {
          System.out.println("Yes");
          System.exit(0);
        }
      }
    }

    System.out.println("No");
  }
}