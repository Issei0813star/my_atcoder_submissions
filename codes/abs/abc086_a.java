import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int result = sc.nextInt() * sc.nextInt();
    
    if(result % 2 == 0) {
      System.out.println("Even");
    }
    else {
      System.out.println("Odd");
    }
    
  }
}