import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
// import java.awt.*;
import java.util.*;



class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] str = br.readLine().split(" ");
        int N = Integer.parseInt(str[0]);
        
        String[] info = br.readLine().split(" ");
        LinkedList<Integer> H = new LinkedList<>();
        for(int i = 0; i < N; i++){
            H.add(Integer.parseInt(info[i]));
        }

        long count = 1;
        while(!H.isEmpty()){
            int hp = H.poll();
            int add = 0;
            int x = hp / 5;
            int xA = hp % 5;
            
            if(x != 0){
                count += x*3;
            }
            if(xA != 0){

                switch ((int)(count % 3)) {
                    case 1:
                    switch (xA) {
                        case 1:
                            add += 1;
                            break;
                        case 2:
                            add += 2;
                            break;
                        default:
                            add += 3;
                            break;
                    }
                    break;
                case 2:
                    switch (xA) {
                        case 1:
                            add += 1;
                            break;
                            case 5:
                            add += 3;
                            break;
                        default:
                            add += 2;
                            break;
                    }
                    
                    break;
                case 0:
                    switch (xA) {
                        case 4:
                        add += 2;
                        break;
                        case 5:
                        add += 3;
                        break;
                        default:
                            add += 1;
                            break;
                    }
                    
                    break;
                }
                count += add;
            }
            

        }
        System.out.println(count - 1);

        br.close();
    }

}