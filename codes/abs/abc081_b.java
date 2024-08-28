import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    sc.nextLine();
    String[] secondLine = sc.nextLine().split(" ");

    int[] numbers = new int[n];
    for (int i = 0; i < n; i++) {
        numbers[i] = Integer.parseInt(secondLine[i]);
    }
    
    int res = 0;
    
    while(true) {
      numbers = calc(numbers);
      if(numbers == null) {
        break;
      }
      res ++;
    }
    
    System.out.println(res);
  }
  
  private static int[] calc(int[] nums) {
    int[] res = new int[nums.length];
    for (int i = 0; i < nums.length; i ++) {
      int n = nums[i];
      if(n % 2 != 0) {
        return null;
      }
      res[i] = n/2;
    }
    return res;
  }
}
