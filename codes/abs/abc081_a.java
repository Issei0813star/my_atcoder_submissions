import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    String a = Integer.toString(sc.nextInt());
    int b = 0;
    for(int i = 0; i < a.length(); i ++) {
      char ch = a.charAt(i);
      
      if(ch == '1') {
        b ++;
      }
    }
    
    System.out.println(b);
  }
}