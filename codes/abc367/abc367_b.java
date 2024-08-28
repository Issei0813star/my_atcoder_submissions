import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    Double num = sc.nextDouble();
    String[] parts = Double.toString(num).split("\\.");
    String intPart = parts[0];
    String decimalPart =  parts[1];
    String[] decimals = decimalPart.split("");
    
    for (int i = decimals.length - 1; i >= 0; i --) {
      int n = Integer.parseInt(decimals[i]);
      if(n != 0) {
        break;
      }
      decimals[i] = "";
    }
    
    String deci = String.join("", decimals);
    
    if(deci.isEmpty()) {
      System.out.println(Integer.parseInt(intPart));
    }
    else {
      System.out.println(Double.parseDouble(intPart + "." + deci));
    }
  }
}