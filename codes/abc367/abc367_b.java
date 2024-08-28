import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        double number = sc.nextDouble();
        
        String numberStr = Double.toString(number);
        String[] parts = numberStr.split("\\.");
        
        if (parts.length > 1) {
            String d = parts[1];
            
            int trailingZeroCount = 0;
            for (int i = d.length() - 1; i >= 0; i--) {
                if (d.charAt(i) == '0') {
                    trailingZeroCount++;
                } else {
                    break;
                }
            }
            
            String trimmedDecimalPart = d.substring(0, d.length() - trailingZeroCount);
            
            if (trimmedDecimalPart.isEmpty()) {
                System.out.println(parts[0]);
            } else {
                System.out.println(parts[0] + "." + trimmedDecimalPart);
            }
        } else {
            System.out.println(parts[0]);
        }
    }
}
