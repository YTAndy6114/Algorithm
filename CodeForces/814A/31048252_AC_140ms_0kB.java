

import java.util.Arrays;
import java.util.Scanner;

public class Anabandonedsentimentfrompast {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n[] = new int[sc.nextInt()];
		int k[] = new int[sc.nextInt()];
		int check = 0;
		int index = 0;
		for (int i = 0; i < n.length; i++) {
			n[i] = sc.nextInt();
			if(n[i] == 0) {
				check++;
				index = i;
			}
		}
		if(check>1 & check == k.length)System.out.println("Yes");
		else if(check == 1){
			n[index] = sc.nextInt();
			boolean ans = true;
			
			for(int i=0;i<n.length-1;i++) {
				if(n[i]<n[i+1]) {
					ans = false;
				}
				else{
					ans = true;
					break;
				}
			}
			if(ans)	System.out.println("Yes");
			else System.out.println("No");
		}
	}

}
