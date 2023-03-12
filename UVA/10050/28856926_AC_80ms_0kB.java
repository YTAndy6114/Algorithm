import java.util.Arrays;
import java.util.Scanner;
class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n-->0) {
			int Date[] = new int[sc.nextInt()];
			int party = sc.nextInt();
			for(int i=0;i<party;i++) {
				int x =sc.nextInt();
				int temp = x;
				while(x <= Date.length) {
					if(x%7!=0 & x%7!=6) {
						Date[x-1]++;
					}
					x+=temp;
				}
			}
			int count=0;
			for(int i=0;i<Date.length;i++) {
				if(Date[i]>=1)count++;
			}
			System.out.println(count);
		}
		
	}
}