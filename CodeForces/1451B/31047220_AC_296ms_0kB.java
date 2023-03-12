
import java.util.Scanner;

public class NonSubstringSubsequence {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			String temp = sc.next();
			while(k-->0) {
				int x = sc.nextInt();
				int y = sc.nextInt();
				String s = "";
				String sx = temp.substring(x-1,y);
				if(sx.equals(temp)) {System.out.println("NO"); continue;}
				for(int i=0;i<temp.length();i++) {
					if(i==x-1) s+="頭";
					else if(i==y-1) s+="尾";
					else if((x-1)<i & i<y-1)continue;
					else s+=temp.charAt(i);
				}
				
				boolean ans = false;
				boolean head = true;
				for(int i = 0;i<s.length();i++) {
					if(s.charAt(i) == '頭' || s.charAt(i) == '尾') {
						head = false;
						continue;
					}
					if(head & sx.charAt(0) == s.charAt(i)) {
						ans = true;
						break;
					}
					else if(!head & sx.charAt(sx.length()-1) == s.charAt(i)) {
						ans = true;
						break;
					}
				}
				if(ans) System.out.println("YES");
				else System.out.println("NO");
			}
		}
	}
}
