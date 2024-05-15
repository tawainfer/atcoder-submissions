import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[3];
    for(int i = 0; i < 3; i++) a[i] = stdIn.nextInt();

    if(a[0] == a[1] && a[1] == a[2]) {
      System.out.println("No");
      System.exit(0);
    }

    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
        if(i == j) continue;
        if(a[i] == a[j]) {
          System.out.println("Yes");
          System.exit(0);
        }
      }
    }

    System.out.println("No");
  }
}