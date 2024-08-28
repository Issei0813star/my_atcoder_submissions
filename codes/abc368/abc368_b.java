import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine();
        
        String[] array = sc.nextLine().split(" ");
        int[] ints = new int[array.length];
        
        for (int i = 0; i < array.length; i++) {
            ints[i] = Integer.parseInt(array[i]);
        }

        int count = 0;
        
        while (true) {
            Arrays.sort(ints);
            reverseArray(ints);
            
            if (ints[1] == 0) { // 2番目に大きい数が0になったら終了
                break;
            }
            
            // 最大の2つの要素を減らす
            ints[0]--;
            ints[1]--;
            count++;
        }
        
        System.out.println(count);
    }
    
    private static void reverseArray(int[] array) {
        int left = 0;
        int right = array.length - 1;
        while (left < right) {
            int temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            left++;
            right--;
        }
    }
}
