import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    boolean[] c = new boolean[16];
    for(int i = 0; i < 16; i++) {
      c[i] = false;
    }

    for(int i = 0; i < 16; i++) {
      if(a == 0) break;
      if(!c[i]) {
        c[i] = true;
        a--;
        i++;
      }
    }

    for(int i = 0; i < 16; i++) {
      if(b == 0) break;
      if(!c[i]) {
        c[i] = true;
        b--;
        i++;
      }
    }

    if(a == 0 && b == 0) {
      System.out.println("Yay!");
    } else {
      System.out.println(":(");
    }
  }
}