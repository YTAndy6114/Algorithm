import java.util.*;


public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int a[] = new int[sc.nextInt()];
		int ans = 0;
		long sum = 0;
		for(int i=0;i<a.length;i++) a[i] = sc.nextInt();
		Arrays.sort(a);
		
		for(int i=0;i<a.length;i++) {
			if(sum <= a[i]) {
				sum += a[i];
				ans++;
			}
		}
		System.out.println(ans);
	}
}