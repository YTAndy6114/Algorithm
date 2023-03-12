import java.util.Scanner;

public class PerfectNumber {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int k = sc.nextInt();
		for (long i = 19l;; i++) {
			long count = 0;
			long temp = i;
			while (temp != 0) {
				count += (temp % 10);
				temp /= 10;
			}
			if (count == 10) {
				k--;
				if (k == 0) {
					System.out.println(i);
					break;
				}
			}
		}
	}
}