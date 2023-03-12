import java.util.*;
public class Source{

    public static void main(String args[]){

       Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t-- > 0) {
			
			int n[] = new int[sc.nextInt()];
			int min = Integer.MAX_VALUE , max = Integer.MIN_VALUE;
			int min_t = 0,  max_t = 0, temp;
			
			for(int i=0;i<n.length;i++) {
				n[i] = sc.nextInt();
				if(n[i] > max) {
					max = n[i];
					max_t = i + 1;
				}
				if(n[i] < min) {
					min = n[i];
					min_t = i +1;
				}
			}
			temp = min_t;
			min_t = Math.min(min_t,max_t);
			max_t = Math.max(temp,max_t);
		    int ans = n.length - (max_t - min_t - 1);
		    System.out.println(Math.min(ans , Math.min(max_t, n.length-min_t+1)));
		}
		
    }
}
