import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }

        long count = N; // 各要素単独の区間（長さ1）は全て等差数列

        int length = 1;
        for (int i = 1; i < N; i++) {
            if (i > 1 && A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
                length++;
            } else {
                length = 2; // 最低でも2要素の等差数列
            }
            count += length - 1;
        }

        System.out.println(count);
    }
}
