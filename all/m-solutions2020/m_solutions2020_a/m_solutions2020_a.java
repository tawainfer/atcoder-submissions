import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int rank = 8;

    int l = 400;
    int r = 600;
    while(true) {
      if(l <= x && x < r) {
        System.out.print(rank);
        break;
      }

      rank--;
      l += 200;
      r += 200;
    }
  }
}