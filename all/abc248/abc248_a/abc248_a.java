import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    boolean[] check = new boolean[10];
    for(int i = 0; i < 10; i++) check[i] = false;

    for(int i = 0; i < 9; i++) {
      check[(int)(s.charAt(i) - 48)] = true;
    }

    for(int i = 0; i < 10; i++) {
      if(!check[i]) {
        System.out.println(i);
        break;
      }
    }
  }
}