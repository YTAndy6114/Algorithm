import java.util.*;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			int n[] = new int[sc.nextInt()];
			for(int i=0;i<n.length;i++) 
				n[i] = sc.nextInt();
			int max,min,ans=0;
			for(int i=0;i<n.length-1;i++) {
				max = Math.max(n[i],n[i+1]);
				min = Math.min(n[i],n[i+1]);
				if(max > 2*min) 
					ans += a(max,min);
				
			}
			System.out.println(ans);
		}
	}
	public static int a(int max,int min) {
		int ans = 0;
		while(max > 2*min) {
			min*=2;
			ans++;
		}
		return ans;
	}
}