import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[3];
    for(int i = 0; i < 3; i++) a[i] = stdIn.nextInt();

    for(int i = 2; i <= 4; i++) {
      int idx = i % 3;
      System.out.printf("%d ", a[idx]);
    }
  }
}