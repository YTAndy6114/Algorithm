import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			long x = sc.nextLong();

			boolean bool = false;

			for (long i = 1l, j = (int) Math.pow(x, 1 / 3.0); i <= j; i++) {
				while (Math.pow(i, 3) + Math.pow(j, 3) > x && j > 0)
					j--;
				if (Math.pow(i, 3) + Math.pow(j, 3) == x && j != 0) {
					bool = true;
					break;
				}
			}
			if (bool)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}