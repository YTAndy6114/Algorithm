import java.util.Scanner;


public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt() , sum = 0;
		while(n-- > 0) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			int z = sc.nextInt();
			if(x+y+z >= 2 ) sum ++;
		}
		System.out.println(sum);
	}
}
