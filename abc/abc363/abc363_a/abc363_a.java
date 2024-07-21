import java.util.*;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int r = sc.nextInt();
    System.out.print(100 - r % 100);
  }
}
