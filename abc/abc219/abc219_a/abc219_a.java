import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int x = stdIn.nextInt();

    if(x < 40) System.out.println(40 - x);
    else if(x < 70) System.out.println(70 - x);
    else if(x < 90) System.out.println(90 - x);
    else System.out.println("expert");
  }
}