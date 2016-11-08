import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    Map<Integer, Integer> hm = new HashMap<>();
    int minD= Integer.MAX_VALUE;
    int n = s.nextInt();
    int[] arr = new int[n];
    for(int i=0; i < n; i++){
        arr[i] = in.nextInt();
        if(hm.containsKey(arr[i])) {
            int x=hm.get(arr[i]);
            int dist = i - x;
            if(dist < minD) minD = dist;
        }
        else hm.put(arr[i],i);            
    }
    if(minD == Integer.MAX_VALUE) minD=-1;
    System.out.println(minD);
}
