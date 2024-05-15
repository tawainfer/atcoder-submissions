import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[3];
    for(int i = 0; i < 3; i++) a[i] = stdIn.nextInt();

    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
        if(a[i] != a[j]) {
          System.out.println("No");
          System.exit(0);
        }
      }
    }

    System.out.println("Yes");
  }
}