import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int k = stdIn.nextInt();
    String s = stdIn.next();

    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
      char c = s.charAt(i);
      if(c == 'o') cnt++;
      System.out.print(c == 'o' && cnt <= k ? 'o' : 'x');
    }
  }
}