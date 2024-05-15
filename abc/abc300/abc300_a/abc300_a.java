import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    int[] c = new int[n];
    for(int i = 0; i < n; i++) c[i] = stdIn.nextInt();

    int sum = a + b;
    for(int i = 0; i < n; i++) {
      if(c[i] == sum) {
        System.out.println(i + 1);
        break;
      }
    }
  }
}