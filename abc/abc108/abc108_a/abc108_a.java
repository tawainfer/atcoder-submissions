import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int k = stdIn.nextInt();

    int ans = 0;
    for(int i = 1; i <= k; i++) {
      for(int j = 1; j <= k; j++) {
        if(i % 2 == 0 && j % 2 != 0) {
          ans++;
        }
      }
    }

    System.out.println(ans);
  }
}