import java.util.*;

public class test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			int n = sc.nextInt();
			if(n%2020 <= n/2020) System.out.println("YES");
			else System.out.println("NO");
		}
	}
}