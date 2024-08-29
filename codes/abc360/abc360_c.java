import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    sc.nextLine();

    String[] array1 = sc.nextLine().split(" ");
    String[] array2 = sc.nextLine().split(" ");
    List<Integer> duplicates = new ArrayList<>();
    Map<Integer, Integer> map = new HashMap<>();

    for (int i = 0; i < N; i ++) {
      int box = Integer.parseInt(array1[i]);
      int stuff = Integer.parseInt(array2[i]);

      int existingStuff = map.getOrDefault(box, 0);

      //0の場合はまだ何も入っていない
      if(existingStuff == 0) {
        map.put(box, stuff);
      }
      else {
        //入ってる場合、軽い方を入れておく
        if(stuff > existingStuff) {
          //既に入っている方がかるい場合入れ替え
          map.put(box, stuff);
          duplicates.add(existingStuff);
        }
        else {
          //既に入っている方がおもい場合か同じ場合はそのまま
          duplicates.add(stuff);
        }
      }
    }
    //最後に溢れた荷物の総和
    int sum = 0;
    for (int d : duplicates) {
      sum += d;
    }
    System.out.println(sum);
  }
}