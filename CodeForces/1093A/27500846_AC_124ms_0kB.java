import java.util.*;
public class text {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0;i<t;i++){
			int a=sc.nextInt();
			int sum = a / 7;
			if(a%7!=0){
				sum+=1;
			}
			System.out.println(sum);
		}
	}
}
