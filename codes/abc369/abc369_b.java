import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int L = 0;
        int R = 0;
        
        boolean firstL = true;
        boolean firstR = true;

        int count = 0;

        sc.nextLine();

        for (int i = 0; i < N; i++) {
            String[] l = sc.nextLine().split(" ");
            int c = Integer.parseInt(l[0]);
            String hand = l[1];
            
            if(hand.equals("L")) {
                if(!firstL) {
                    count += Math.abs(c - L);
                }
                firstL = false;
                L = c;
            }
            else {
                if(!firstR) {
                    count += Math.abs(c - R);
                }
                firstR = false;
                R = c;
            }
            
            
        }
        
        System.out.println(count);


    }
}