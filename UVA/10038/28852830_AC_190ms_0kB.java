import java.util.Arrays;
import java.util.Scanner;

class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		while(sc.hasNext()) {
			int a[]=new int[sc.nextInt()];
			for(int i=0;i<a.length;i++)a[i]=sc.nextInt();
			boolean t = true;
			if(a.length != 1) {
				int b[]=new int[a.length-1];
				for(int i=0;i<b.length;i++) {
					b[i]=Math.abs(a[i]-a[i+1]);
				}
				Arrays.sort(b);
				for(int i=1;i<a.length;i++) {
					if(b[i-1] != i) {
						t = false;
						break;
					}
				}
			}
			if(t)System.out.println("Jolly");
			else System.out.println("Not jolly");
		}
	}
}