import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < N; i++) {
            int power = scanner.nextInt(); // 2^A[i] の対数 (A[i])
            
            // 現在のボールのサイズを対数で管理
            int ballSize = power;

            // スタックの末尾から2つのボールを取り出して処理
            while (!stack.isEmpty() && stack.peek() == ballSize) {
                stack.pop();
                ballSize++; // サイズが2倍になる（対数で1増える）
            }

            stack.push(ballSize); // 新しいボールを追加
        }

        // スタックのサイズが最終的に残ったボールの数
        System.out.println(stack.size());
    }
}
