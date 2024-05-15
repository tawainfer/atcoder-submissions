import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] s = new int[n];
    for(int i = 0; i < n; i++) s[i] = stdIn.nextInt();

    for(int i = 0; i < n; i++) {
      if(i == 0) {
        System.out.print(s[i] + " ");
      } else {
        System.out.print(s[i] - s[i - 1] + " ");
      }
    }
  }
}