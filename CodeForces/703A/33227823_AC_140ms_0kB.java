import java.util.Scanner;


public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt() , M = 0 , C = 0;
		while(n-- > 0) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			if(x>y) M++;
			else if(x<y) C++;
		}
		if(M>C)	System.out.println("Mishka");
		else if(M<C) System.out.println("Chris");
		else System.out.println("Friendship is magic!^^");
	}
}
