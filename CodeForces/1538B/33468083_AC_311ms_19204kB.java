import java.util.Scanner;

public class test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			int n[] = new int[sc.nextInt()];
			int sum = 0,ans=0;
			for(int i=0;i<n.length;i++) {
				n[i] = sc.nextInt();
				sum += n[i];
			}
			if(sum%n.length !=0) {
				System.out.println(-1);
				continue;
			}
			sum = sum/n.length;
			for(int i=0;i<n.length;i++) {
				if(n[i]>sum) ans++;
			}
			System.out.println(ans);
		}
	}
}