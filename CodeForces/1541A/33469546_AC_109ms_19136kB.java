import java.util.*;

public class test {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			int n = sc.nextInt();
			boolean b = false;
			if(n%2!=0) {
				n = n-3;
				b = true;
			}
			for(int i=1;i<=n;i++) {
				if(i%2==1) {
					System.out.print(i+1+" ");
					
				}
				
				else {
					System.out.print(i-1+" ");
					
				}
			}
			if(b & (n+3)%2!=0) {
				System.out.print((n+3)+" "+(n+1) +" "+(n+2));
			}
			System.out.println();
		}
	}
}