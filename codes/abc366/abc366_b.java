import java.util.*;


public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    sc.nextLine();
    String[] l = new String[n];
    for(int i = 0; i < n; i ++) {
      l[i] = sc.nextLine();
    }
    
    int maxLength = 0;
    for(String s : l) {
      if(s.length() > maxLength) {
        maxLength = s.length();
      }
    }
    String[] r = new String[maxLength];
    for (int i = n -1; i >= 0; i --) {
      String s = l[i];
      int stl = s.length();
      for (int j = 0; j < maxLength; j ++) {
        String rs = r[j] == null  ? "" : r[j];
        if(j >= stl) {
          r[j] = rs + "*";
        }
        else {
          r[j] = rs + s.charAt(j);
        }
      }
    }
    
    for(String str : r) {
      System.out.println(removeTrailingAsterisks(str));
    }
  }
  
  public static String removeTrailingAsterisks(String str) {
    int endIndex = str.length() - 1;
    while (endIndex >= 0 && str.charAt(endIndex) == '*') {
      endIndex--;
    }
    return str.substring(0, endIndex + 1);
  }
}