import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt(), C = sc.nextInt();
		Long Y = 2l*(C + N);
		int ans = N-(int)(-3+Math.sqrt(9+4*Y)) / 2;
		if(ans >= 0) System.out.println(ans);
		else System.out.println(N-(int)(-3-Math.sqrt(9+4*Y)) / 2);
	}
}