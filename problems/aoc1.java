package problems;

import java.util.ArrayList;
import java.util.Scanner;

public class aoc1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> inp = new ArrayList<>();
        while(sc.hasNextInt()) {
            int add = sc.nextInt();
            if(add==0) break;
            inp.add(add);            
        }
        sc.close();
        int count = 0;
        for(int i = 1; i < inp.size(); i++) {
            if(inp.get(i) > inp.get(i-1)) count++;
        }
        System.out.println(count);

    }
}
