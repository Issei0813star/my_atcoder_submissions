import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    int a = sc.nextInt();
    int b = sc.nextInt();
    
    if(a == b) {
      System.out.println("No");
      return;
    }
    
    boolean isA = a > b;
    int k = n - (a + b);
    if(isA && a > (b + k)) {
      System.out.println("Yes");
      return;
    }
    else if (!isA && b > (a + k)) {
      System.out.println("Yes");
      return;
    }
    else {
      System.out.println("No");
      return;
    }
    
  }
}