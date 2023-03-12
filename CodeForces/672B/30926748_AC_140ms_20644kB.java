import java.util.*;
public class DifferentisGood {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Set<Character> set = new HashSet();
		int n = sc.nextInt();
		int ans = 0;
		String s = sc.next();
		boolean t = true;
		if(n>26) t = false;
		if(t) {
			for(int i=0;i<s.length();i++) {
				if(!set.contains(s.charAt(i))) {
					set.add(s.charAt(i));
				}
				else {
					ans++;
				}
			}
			System.out.println(ans);
		}
		else System.out.println(-1);
	}
}