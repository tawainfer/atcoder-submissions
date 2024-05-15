import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String[] s = new String[3];
    for(int i = 0; i < 3; i++) s[i] = stdIn.next();

    String[] ptn = {"ABC", "ARC", "AGC", "AHC"};
    boolean[] check = new boolean[4];
    for(int i = 0; i < 4; i++) check[i] = false;

    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 4; j++) {
        if(s[i].equals(ptn[j])) {
          check[j] = true;
          break;
        }
      }
    }

    for(int i = 0; i < 4; i++) {
      if(!check[i]) {
        System.out.println(ptn[i]);
        break;
      }
    }
  }
}