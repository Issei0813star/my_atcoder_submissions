import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String S = sc.next();
        String T = sc.next();
        
        int sLength = S.length();
        int tLength = T.length();
        
        // c と w の組み合わせを試す
        for (int w = 1; w < sLength; w++) {
            for (int c = 1; c <= w; c++) {
                StringBuilder str = new StringBuilder();
                for (int j = c - 1; j < sLength; j += w) {
                    str.append(S.charAt(j));
                }
                if (str.toString().equals(T)) {
                    System.out.println("Yes");
                    return;
                }
            }
        }
        
        System.out.println("No");
    }
}
