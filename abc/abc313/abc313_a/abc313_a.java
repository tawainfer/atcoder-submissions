import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = stdIn.nextInt();
    }

    int maxIdx = 0;
    for(int i = 1; i < n; i++) {
      if(a[maxIdx] < a[i]) {
        maxIdx = i;
      }
    }

    int max = a[maxIdx];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] == max) {
        cnt++;
      }
    }

    if(a[0] == max && cnt == 1) {
      System.out.println(0);
    } else {
      System.out.println(max - a[0] + 1);
    }
  }
}