import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[4];
    for(int i = 0; i < 4; i++) a[i] = stdIn.nextInt();

    char[] ptn = {'!', 'F', 'M', 'T'};
    for(int i = 0; i < 100009; i++) {
      int idx = i % 3 + 1;
      if(a[idx] > a[0]) {
        System.out.println(ptn[idx]);
        break;
      }

      a[0] -= a[idx];
    }
  }
}