import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();

    int ans = -1;
    for(int i = a; i <= b; i++) {
      if(i % c == 0) {
        ans = i;
      }
    }

    System.out.println(ans);
  }
}