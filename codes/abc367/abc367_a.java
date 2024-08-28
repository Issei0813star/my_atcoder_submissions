import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int A = sc.nextInt();  // 叫ぶ時間
        int B = sc.nextInt();  // 寝る時間
        int C = sc.nextInt();  // 起きる時間
        
        if (B < C) {  // 寝る時間と起きる時間が同じ日に収まる場合
            if (B <= A && A < C) {
                System.out.println("No");
            } else {
                System.out.println("Yes");
            }
        } else {  // 日を跨ぐ場合
            if (A >= B || A < C) {
                System.out.println("No");
            } else {
                System.out.println("Yes");
            }
        }
    }
}
