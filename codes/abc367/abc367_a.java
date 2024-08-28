import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int sakebu = sc.nextInt();
    int neru = sc.nextInt();
    int okiru = sc.nextInt();
    
    boolean matagu = neru > okiru;
    
    if(!matagu) {
      if(neru < sakebu && sakebu < okiru) {
        System.out.println("No");
      }
      else {
        System.out.println("Yes");
      }
    }
    else {
      if(sakebu < okiru || sakebu > neru) {
        System.out.println("No");
      }
      else {
        System.out.println("Yes");
      }
    }
    
  }
}