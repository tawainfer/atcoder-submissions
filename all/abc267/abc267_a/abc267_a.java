import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String[] ptn = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    String s = stdIn.next();

    for(int i = 0; i < 5; i++) {
      if(s.equals(ptn[i])) {
        System.out.println(5 - i);
        break;
      }
    }
  }
}