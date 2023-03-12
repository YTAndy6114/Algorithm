import java.util.Scanner;

public class A {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
			long r = sc.nextLong(),b = sc.nextLong(),d = sc.nextLong();
			long remain = Math.abs(r-b);
			if((long)(Math.min(r,b)*d) >= remain) System.out.println("YES");
			else System.out.println("NO");
		}
	}
}
