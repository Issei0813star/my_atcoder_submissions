import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    sc.nextLine();
    String[] array = sc.nextLine().split(" ");
   Arrays.sort(array, new Comparator<String>() {
          @Override
          public int compare(String s1, String s2) {
              return Integer.compare(Integer.parseInt(s2), Integer.parseInt(s1));
          }
      });
    int alice = 0;
    int bob = 0;
    
    for (int i = 0; i < n; i ++){
      int num = Integer.parseInt(array[i]);
      if(i % 2 == 0) {
        alice += num;
      }
      else {
        bob += num;
      }
    }
    System.out.println(alice - bob);
  }
}