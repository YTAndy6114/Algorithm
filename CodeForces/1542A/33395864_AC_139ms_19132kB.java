import java.util.*;


public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int x = sc.nextInt();
			int a[] = new int[x*2];
			int odd = 0, even=0;
			for(int i=0;i<a.length;i++) {
				a[i] = sc.nextInt();
				if(a[i] % 2==0) even++;
				else odd ++;
			} 
			if(even == odd ) System.out.println("Yes");
			else System.out.println("No");
		}
		
	}
}