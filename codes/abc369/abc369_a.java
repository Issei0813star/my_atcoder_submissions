import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        Set<Integer> xValues = new HashSet<>();
        
        if (a == b) {
            xValues.add(a);
        } else {
            xValues.add(2 * a - b);
            xValues.add(2 * b - a);
            
            if ((a + b) % 2 == 0) {
                xValues.add((a + b) / 2);
            }
        }
        
        System.out.println(xValues.size());
      
    }
}
