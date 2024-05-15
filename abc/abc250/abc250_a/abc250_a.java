import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int h = stdIn.nextInt();
    int w = stdIn.nextInt();
    int r = stdIn.nextInt();
    int c = stdIn.nextInt();

    int ans = 4;
    if(r == 1 || r == h) ans--;
    if(c == 1 || c == w) ans--;
    if(h == 1) ans--;
    if(w == 1) ans--;
    System.out.println(ans);
  }
}