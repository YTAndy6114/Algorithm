import java.math.BigInteger;
import java.util.Scanner;

public class test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			BigInteger n = new BigInteger(sc.next());
			BigInteger m = new BigInteger(sc.next());
			BigInteger x = new BigInteger(sc.next());
			if(x.mod(n).toString().equals("0")) {
				System.out.println(n.subtract(BigInteger.ONE).multiply(m).add(x.divide(n)));

			}
			else System.out.println((x.mod(n).subtract(BigInteger.ONE).multiply(m).add(x.divide(n).add(BigInteger.ONE))).toString());
			
		}
	}
}