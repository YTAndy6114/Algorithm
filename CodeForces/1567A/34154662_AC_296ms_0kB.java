import java.util.Scanner;

public class A {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
			int n = sc.nextInt();
			String s = sc.next();
			String ans = "";
			for(int i=0;i<s.length();i++) {
				if(s.charAt(i) == 'U') ans += 'D';
				else if(s.charAt(i) == 'D') ans += 'U';
				else ans += s.charAt(i);
			}
			System.out.println(ans);
		}
	}
}
