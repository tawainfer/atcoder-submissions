import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int t = stdIn.nextInt();
    for(int i = 0; i < t; i++) {
      int n = stdIn.nextInt();
      int[] a = new int[n];
      
      int cnt = 0;
      for(int j = 0; j < n; j++) {
        if(stdIn.nextInt() % 2 != 0) cnt++;
      }

      System.out.println(cnt);
    }
  }
}