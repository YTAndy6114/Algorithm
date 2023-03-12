import java.util.*;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			int ans = 0 , x = n , temp;
			if(n<=9) {
				System.out.println(n);
				continue;
			}
			while(n!=0) {
				n/=10;
				ans++;
			}
			temp = ans;
			ans = (ans-1)*9;
			for(int i=1;i<=9;i++) {
				int count = 0;
				for(int j=0;j<temp;j++) {
					count += i*Math.pow(10,j);
				}
				if(x < count) {
					break;
				}
				ans++;
			}
			
			System.out.println(ans);
		}
	}
}