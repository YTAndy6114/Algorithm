import java.util.*;
public class MereArray {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		while (test-- > 0) {
			ArrayList<Long> arr = new ArrayList();
			int n = sc.nextInt();
			Long a[] = new Long[n];
			Long min = 10000000000l;
			for (int i = 0; i < n; i++) {
				a[i] = sc.nextLong();
				min = Math.min(min, a[i]);
			}
			if (n == 1) {
				System.out.println("YES");
				continue;
			}

			for (int i = 0; i < n; i++) {
				if (a[i] % min == 0) {
					arr.add(a[i]);
					a[i] = 0l;
				}
			}
			boolean bool = true;
			arr.sort(null);
			for (int i = 0,k = 0; i < n; i++) {
				if(a[i]==0) {
					a[i] = arr.get(k);
					k++;
				}
			}
			for (int i = 0; i < n-1; i++) {
				if(a[i] > a[i+1]) {
					bool = false;
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