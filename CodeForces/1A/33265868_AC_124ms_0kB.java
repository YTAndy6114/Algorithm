import java.util.Scanner;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		double n = sc.nextLong();
		double m = sc.nextLong();
		double a = sc.nextLong();
		System.out.println((long)Math.ceil(n/a) * (long)Math.ceil(m/a));
		 
	}
}