import java.util.*;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			String s = sc.next();
			int a = 0,b = 0,c = 0;
			for(int i=0;i<s.length();i++) {
				if(s.charAt(i) == 'A') a++;
				if(s.charAt(i) == 'B') b++;
				if(s.charAt(i) == 'C') c++;
			}
			if(a+c != b) System.out.println("NO");
			else System.out.println("YES");
		}

	}
}