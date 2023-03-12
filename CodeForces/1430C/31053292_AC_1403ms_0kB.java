import java.util.Scanner;
public class NumbersonWhiteboard {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while (n-- > 0) {
			int m = sc.nextInt();
			System.out.println(2);
			int a = m , b = m-1;
			for(int i=0;i<m-1;i++) {
				System.out.println(a + " " + b);
				a = (a+b+1)/2;
				b--;
			}
		}
	}
}