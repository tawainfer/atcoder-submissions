import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int k = stdIn.nextInt();

    for(int i = 0; i < n; i++) {
      int x = stdIn.nextInt();
      if(x % k == 0) {
        System.out.printf("%d ", x / k);
      }
    }
  }
}