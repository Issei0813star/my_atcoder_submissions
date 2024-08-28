import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int qc = sc.nextInt();
    Map<Integer, Integer> m = new HashMap<>();
    for(int i = 0; i < qc; i ++) {
      int c = sc.nextInt();
      if(c == 1) {
        int nn = sc.nextInt();
        m.put(nn, m.getOrDefault(nn,0) + 1);
        continue;
      }
      if(c == 2) {
        int nk = sc.nextInt();
        int nh = m.get(nk);
        if(nh == 1) {
          m.remove(nk);
        }
        else {
          m.put(nk, nh - 1);
        }
        continue;
      }
      System.out.println(m.size());
    }
  }
}