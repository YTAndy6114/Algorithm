import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int word[]=new int[200];
		int count = 0;
		for(int i = 0;i <= n;i++) {
			String s = sc.nextLine();
			count += s.length();
			s = s.toUpperCase();
			for(int j=0;j<s.length();j++) {
				word[s.charAt(j)]++ ;
			}
		}
		while(count-- > 0) {
			if(count == 0) break;
			for(int i='A';i<='Z';i++)	
				if(count == word[i]) System.out.println((char)i+" "+word[i]);
		}
	}
}
