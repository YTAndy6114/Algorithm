import java.util.*;
public class Main{

    public static void main(String args[]){
		Scanner sc =new Scanner(System.in);
		int n=sc.nextInt();
		while(n-->0){
			int a[]=new int[sc.nextInt()];
			for(int i=0;i<a.length;i++) a[i]=sc.nextInt();
			Arrays.sort(a);
			int x=a[a.length/2];
			int smu=0;
			for(int i=0;i<a.length;i++){
				smu+=Math.abs(x-a[i]);
			}
			System.out.println(smu);
		}
        
    }
}
