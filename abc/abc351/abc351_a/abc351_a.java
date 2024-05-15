import java.util.*;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);
    
    var a = new ArrayList<Integer>();
    var b = new ArrayList<Integer>();
    for(int i = 0; i < 9; i++) a.add(stdIn.nextInt());
    for(int i = 0; i < 8; i++) b.add(stdIn.nextInt());

    int sa = a.stream().mapToInt(Integer::valueOf).sum();
    int sb = b.stream().mapToInt(Integer::valueOf).sum();
    System.out.print(sa - sb + 1);
  }
}
