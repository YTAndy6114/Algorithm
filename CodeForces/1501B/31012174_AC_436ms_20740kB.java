import java.util.*;
public class Main{
public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int num[] = new int[sc.nextInt()];
			StringBuilder s = new StringBuilder();
			for(int i =0;i<num.length;i++) num[i]=sc.nextInt();
			int c = num[num.length-1];
			for(int i = num.length - 1;i >= 0; i--){
				if(c<=num[i]) c=num[i];
				if(c>0){
					s.append("1 ");
					c--;
				}
				else s.append("0 ");
			}
			System.out.println(s.reverse().toString().trim());
		}
    }
}