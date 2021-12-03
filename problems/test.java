package problems;


/**
 * test
 */
public class test {

    public static void main(String[] args) {
        // int[] nums = {8,1,2,2,3};
        // nums = (smallerNumbersThanCurrent(nums)); 
        // System.out.println(checkIfPangram("thewuickbrownfoxjumpsoverthelazydog"));
        int[][] a = { { 1,1,1 }, { 1,0,1 }, {0,0,1} };
        // System.out.println(lo(a)); 
        a = lo(a);

    }

    static int[] smallerNumbersThanCurrent(int[] nums) {
        // int[] ans = new int[nums.length];
        // for(int i = 0; i < nums.length; i++) {
        //     int count = 0;
        //     for(int j : nums) {
        //         if(j<nums[i]) count++;
        //     }
        //     ans[i] = count;
        // }
        // return ans;
        
        int[] count = new int[101];
        int[] res = new int[nums.length];
        
        for (int i =0; i < nums.length; i++) {
            count[nums[i]]++;
        }
        
        for (int i = 1 ; i <= 100; i++) {
            count[i] += count[i-1];    
        }
        
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0)
                res[i] = 0;
            else 
                res[i] = count[nums[i] - 1];
            System.out.println(res[i]);
        }
        
        return res;
    }

    static boolean checkIfPangram(String sentence) {

        if(sentence.length()>=26) {
            char ch = 'a';
            for(int i = 0; i < 26; i++) {
                // System.out.println(ch);
                if(sentence.contains(String.valueOf(ch))) {
                    ch++;
                    continue;
                }
                else return false;
            }
            return true;
        }
        return false;
    }

    static int[][] lo(int[][] A) {
        int n = A.length;
        for (int[] row : A)
            for (int i = 0; i*2 < n; i++)
                if (row[i] == row[n - i - 1]) {
                    row[i] = row[n - i - 1] ^= 1;
                    System.out.print(row[0]);
                    System.out.print(row[2]);
                    System.out.println(row[1]);
                }
        return A;
    }

}