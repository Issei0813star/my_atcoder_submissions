import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    List<Integer> resArray = new ArrayList<>();
    
    int x = sc.nextInt();
    int y = sc.nextInt();

    for (int i = 1; i <= n; i++) {
      String numStr = Integer.toString(i);
      int sum = 0;
      for (char c : numStr.toCharArray()) {
          sum += Character.getNumericValue(c);
      }
      
      if(x <= sum && sum <= y) {
        resArray.add(i);
      }
    }
    
    int result = 0;
    for(Integer i : resArray) {
      result += i;
    }
    
    System.out.println(result);
  }
}