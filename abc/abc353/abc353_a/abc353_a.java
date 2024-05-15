import java.util.*;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    int[] h = new int[n];
    for(int i = 0; i < n; i++) {
      h[i] = stdIn.nextInt();
    }

    for(int i = 1; i < n; i++) {
      if(h[i] > h[0]) {
        System.out.print(i + 1);
        return;
      }
    }

    System.out.print(-1);
  }
}
