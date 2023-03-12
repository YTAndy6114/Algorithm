import java.util.Arrays;
import java.util.Scanner;

class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		long b[]=new long[92];
		b[0]=1;b[1]=1;
		for(int i=2;i<b.length;i++) {
			b[i]=b[i-1]+b[i-2];
		}
//		System.out.println(b[91]);
		int n =sc.nextInt();
		for(int j=1;j<=n;j++){
			int x=sc.nextInt();
			int temp=x;
			String s="";
			boolean t =false;
			for(int i=b.length-1;i>0;i--) {
				if(x>=b[i]) {
					s=s+"1";
					x-=b[i];
					t=true;
				}
				else if(t) {
					s=s+"0";
				}
			}
			System.out.printf("%d = %s (fib)\n",temp,s);
		}
	}
}