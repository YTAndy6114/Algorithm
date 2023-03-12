
import java.util.*;
public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long H = sc.nextLong();
		long L = sc.nextLong();
		double X = (H*H+L*L);
		X/=(2*H);
		System.out.println(X-H);
		
	}
}
