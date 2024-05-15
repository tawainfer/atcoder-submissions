import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String[] s = new String[4];
    for(int i = 0; i < 4; i++) s[i] = stdIn.next();

    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
        if(i == j) continue;
        if(s[i].equals(s[j])) {
          System.out.println("No");
          System.exit(0);
        }
      }
    }

    System.out.println("Yes");
  }
}