import java.util.*;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			int m = sc.nextInt();
			int k = sc.nextInt();
			int circle = (Math.abs(n-m)) * 2;
			int ans = k + Math.abs(n-m);
			if(ans > circle) ans = ans - circle;
			if(circle < Math.max(n,m) || k > circle) {
				System.out.println(-1);
				continue;
			}
			System.out.println(ans);
			
		}

	}
}