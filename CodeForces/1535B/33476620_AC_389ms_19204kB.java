import java.util.*;

public class test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			Vector<Integer> a = new Vector();
			Vector<Integer> b = new Vector();
			for(int i = 0;i<n;i++) {
				int temp = sc.nextInt();
				if(temp%2==0) {
					a.add(temp);
				}
				else b.add(temp);
			}
			for(int i=0;i<b.size();i++) {
				a.add(b.get(i));
			}
			int ans = 0;
			for(int i=0;i<a.size();i++) {
				for(int j=i+1;j<a.size();j++) {
					if(GCD(a.get(i),2*a.get(j)) > 1) {
						ans++;
					}
				}
			}
			System.out.println(ans);
		}
	}
	public static int GCD(int a,int b) {
		if(b==0) return a;
		return GCD(b,a%b);
	}
	
}