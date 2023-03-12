import java.util.Scanner;
import java.util.Arrays;

class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);	
		while(sc.hasNext()){
			int a[]=new int[sc.nextInt()];
			int b[]=new int[a.length-1];
			for(int i=0;i<a.length;i++) a[i]=sc.nextInt();
			for(int i=0;i<b.length;i++) b[i]=Math.abs(a[i]-a[i+1]);
			Arrays.sort(b);
			boolean t=true;
			for(int i=0;i<b.length;i++){
				if(b[i]==(i+1));
				else{
					t=false;
					break;
				}
			}
			if(t) System.out.println("Jolly");
			else System.out.println("Not jolly");
		}

	}

}
