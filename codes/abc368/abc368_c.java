import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    sc.nextLine();
    String[] array = sc.nextLine().split(" ");
    long T = 0;
    
    int[] health = new int[n];
    
    for (int i = 0; i < array.length; i++) {
      health[i] = Integer.parseInt(array[i]);
    }
    
    for(int h : health) {
      while(true) {
        if(h >= 5) {
          T += 3;
          h -= 5;
          
          int nn = h / 5;
          T += nn * 3;
          h -= nn * 5;
        }
        else {
          T ++;
          int attack = T % 3 == 0 ? 3 : 1;
          h -= attack;
        }
        if(h <= 0) {
          break;
        }
      }
    }
    
    System.out.println(T);
    
  }
}