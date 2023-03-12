import java.util.*;
public class Main{
	static Long s[];
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(); 
		int m = sc.nextInt(); 
		Long x[] = new Long[n+1];
		x[0] = 0l;
		for(int i=1;i<x.length;i++) {
			x[i] = x[i-1] + sc.nextLong(); 
		}
		int count = 0;
		while(m-->0) {
			Long t = sc.nextLong();
			while(t>x[count]) count++;			
			System.out.println(count+" "+(t-x[count-1]));
		}
	}
	
}