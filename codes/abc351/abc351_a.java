import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a = 0;
    int b = 0;
    
    for (int i = 0; i < 9; i ++) {
      a += sc.nextInt();
    }
    
    for (int i = 0; i < 8; i ++) {
      b += sc.nextInt();
    }

    System.out.println((a-b) + 1);
    
  }
}