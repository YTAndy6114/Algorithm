import java.util.*;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			int a = sc.nextInt();int b = sc.nextInt();
			int c = sc.nextInt();int d = sc.nextInt();
			int min_w = Math.abs(a-b)*n;int max_w = (a+b)*n;
			int min_p = Math.abs(c-d);int max_p = c+d;
//			System.out.println(min_w);
//			System.out.println(max_w);
//			System.out.println(min_p);
//			System.out.println(max_p);
			if( (min_w >= min_p && min_w <= max_p) || (max_w >= min_p && max_w <= max_p) || (min_w <= min_p && max_w >= max_p)) {
				System.out.println("Yes");
			}
			else System.out.println("No");
		}
		
	}
}
