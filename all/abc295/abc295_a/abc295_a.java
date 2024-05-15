import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String[] s = new String[n];
    for(int i = 0; i < n; i++) {
      s[i] = stdIn.next();
    }

    String[] ptn = {"and", "not", "that", "the", "you"};
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < ptn.length; j++) {
        if(s[i].equals(ptn[j])) {
          System.out.println("Yes");
          System.exit(0);
        }
      }
    }

    System.out.println("No");
  }
}