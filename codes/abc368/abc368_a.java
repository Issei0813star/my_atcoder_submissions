import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    int k = sc.nextInt();
    sc.nextLine();
    String[] cardsStr = sc.nextLine().split(" ");
    
    int[] cards = new int[cardsStr.length];
    for (int i = 0; i < cardsStr.length; i++) {
      cards[i] = Integer.parseInt(cardsStr[i]);
    }
    
    for (int i = 0; i < k; i ++) {
      int lastCard = cards[cards.length - 1];
      
      for (int j = cards.length - 1; j > 0; j--) {
        cards[j] = cards[j - 1];
      }
      
      cards[0] = lastCard;
    }
    
    String[] resultStr = new String[cards.length];
    for (int i = 0; i < cards.length; i++) {
      resultStr[i] = String.valueOf(cards[i]);
    }
    
    String output = String.join(" ", resultStr);
    System.out.println(output);
  }
}