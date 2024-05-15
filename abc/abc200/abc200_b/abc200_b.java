import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    long n = stdIn.nextLong();
    long k = stdIn.nextLong();

    for(long i = 0; i < k; i++) {
      if(n % 200 == 0) {
        n /= 200;
      } else {
        n = n * 1000 + 200;
      }
    }

    System.out.println(n);
  }
}