import java.util.Arrays;
import java.util.Scanner;

public class Squares {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		if(k>n) System.out.println(-1);
		else {
				int test[] = new int[n];
				for(int i=0;i<n;i++) test[i] = sc.nextInt();
				Arrays.sort(test);
				System.out.println(test[n-k]+" "+"0");
		}
	}

}
