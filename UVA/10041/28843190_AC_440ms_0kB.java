import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-- > 0) {
			int sum = 0;
			int x[]=new int[sc.nextInt()];
			for(int i = 0;i<x.length;i++) x[i] =sc.nextInt();
			Arrays.sort(x);
			int ans = x[x.length/2];
			for(int i=0;i<x.length;i++) {
				sum = sum + Math.abs(ans-x[i]);
			}
			System.out.println(sum);
		}
	}
}
