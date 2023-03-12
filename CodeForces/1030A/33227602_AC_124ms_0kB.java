import java.util.Scanner;


public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt() , t = 0;
		while(n-- > 0) {
			int x = sc.nextInt();
			if(x == 1) {
				System.out.println("HARD");
				t = 1;
				break;
			}
		}
		if(t == 0) System.out.println("EASY");
	}
}
