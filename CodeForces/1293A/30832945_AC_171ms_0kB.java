import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class ConneRandtheARCMarklandN {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
			ArrayList<Integer> arr = new ArrayList();
			boolean boo = true;
			int z = 0;
			boolean t1 = false;
			boolean t2 = false;
			for (int i = 0; i < c; i++) {
				arr.add(sc.nextInt());
				while ((arr.contains(b + z) || t1) & (arr.contains(b - z) || t2)) {
					z++;
					if ((b + z) > a)
						t1 = true;
					else if ((b - z) < 1)
						t2 = true;
				}

			}
			System.out.println(z);
		}
	}
}