
import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		Scanner sc =new Scanner (System.in);
		int t=sc.nextInt();
		int x=1;
		while(t-- >0){
			int n=sc.nextInt();
			int m=sc.nextInt();
			int temp = 0;
			if(n>m){
				n=temp;
				temp=m;
				m=temp;
			}
			int ans=0;
			for(int i=n;i<=m;i++){
				if(i%2!=0) ans+=i;
			}
			System.out.println("Case "+x+": "+ans);
			x++;
		}
		
	}
}
