import java.util.Scanner;

class Main {
	static long a[]=new long[90];
	static long b[]=new long[88];
	Main() {
		a[0]=1l;
		a[1]=1l;
		for(int i=2 ; i<90; i++) {
			a[i] = a[i-2]+a[i-1];
		}
		b[0]=1;
		for(int i=1;i<88;i++) {
			b[i]=a[i+1];
		}
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int N =sc.nextInt();
		new Main();
		while(N-- > 0) {
			int x = sc.nextInt();//輸入一個數字(10進位)
			int temp = x;
			String s="";
			boolean f = false;
			for(int i=b.length-1;i>=0;i--) {
				if(x>=b[i]) {
					x-=b[i];
					s=s+"1";
					f = true;
				}
				else if(f) s=s+"0";
				
			}
			System.out.printf("%d = %s (fib)\n",temp,s);
		}
	}

}
