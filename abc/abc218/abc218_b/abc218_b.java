import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] p = new int[26];
    for(int i = 0; i < 26; i++) p[i] = stdIn.nextInt() + 96;

    for(int i = 0; i < 26; i++) {
      System.out.printf("%c", (char)p[i]);
    }
  }
}