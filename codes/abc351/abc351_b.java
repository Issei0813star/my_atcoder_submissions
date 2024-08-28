import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int N = sc.nextInt();
    
    //二次元配列でグリッドを表現
    String[][] gridA = new String[N][N];
    String[][] gridB = new String[N][N];
    
    sc.nextLine();
    
    for(int i = 0; i < N * 2; i ++) {
      String[] record = sc.nextLine().split("");
      if (i < N) {
        //gridA
        gridA[i] = record;
      }
      else {
        //gridB
        gridB[i - N] = record;
      }
      
    }
    
    for (int i = 0; i < N; i ++) {
      
      //行ごとに処理
      String[] recordA = gridA[i];
      String[] recordB = gridB[i];
      
      int x = 0;
      
      for(int j = 0; j < N; j ++) {
        //一行内で、違う文字があればindexを取る = x軸
        if(!recordA[j].equals(recordB[j])) {
          x += (j + 1);
          break;
        }
      }
      
      if(x != 0) {
        //違う文字が見つかった場合、その時点でのiがy軸
        System.out.println(Integer.valueOf(i + 1) + " " + x);
        break;
      }
    }
    
  }
}