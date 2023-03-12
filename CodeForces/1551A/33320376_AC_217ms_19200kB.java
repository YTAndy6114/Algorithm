import java.util.*;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			int y = (int)Math.ceil(n/3);
			int x = n - 2*y;
			int min = Math.abs(x-y);
			if(min > Math.abs(y-1 - (n-2*(y-1)))) {
				y--;
				x = n-2*y;
			}
			while(x-y >=2) {
				x-=2;
				y++;
			}
			System.out.println(x + " " + y);
		}
	}
}