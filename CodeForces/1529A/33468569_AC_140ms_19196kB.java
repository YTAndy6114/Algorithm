import java.util.*;

public class test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			int n[] = new int[sc.nextInt()];
			int ans = 0;
			for(int i=0;i<n.length;i++) {
				n[i] = sc.nextInt();
			}
			Arrays.sort(n);
			for(int i=1;i<n.length;i++) {
				if(n[i] > n[0]) ans++;
			}
			System.out.println(ans);
		}
	}
}