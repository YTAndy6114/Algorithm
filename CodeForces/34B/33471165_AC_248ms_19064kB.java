import java.util.*;

public class test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n[] = new int[sc.nextInt()];
		int ans = 0;
		int m = sc.nextInt();
		for(int i=0;i<n.length;i++) n[i] = sc.nextInt();
		Arrays.sort(n);
		for(int i=0;i<m;i++) {
			if(n[i]>=0) break;
			ans -= n[i];
		}
		System.out.println(ans);
	}
}