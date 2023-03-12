import java.util.HashSet;
import java.util.Scanner;


public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-- > 0) {
			int x = sc.nextInt();
			HashSet a = new HashSet();
			while(x-->0) {
				a.add(sc.nextInt());
			}
			System.out.println(a.size());
		}
		
	}
}
