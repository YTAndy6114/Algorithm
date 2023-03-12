import java.math.BigInteger;
import java.util.Scanner;

class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		while(n-->0) {
			String s1[] = sc.nextLine().split(" ");
			System.out.println(new BigInteger(s1[0]).subtract(new BigInteger(s1[1])).toString());
		}
	}
}