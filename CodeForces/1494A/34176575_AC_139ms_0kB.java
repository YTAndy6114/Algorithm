import java.util.*;

public class A {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
			boolean ans = false;
			String s = sc.next() , temp = "";
			char f = s.charAt(0) , b = s.charAt(s.length()-1);
			for(int i=1;i<=2;i++) {
				temp = "";
				for(int j=0;j<s.length();j++) {
					if(s.charAt(j) == f) {
						temp += '(';
					}
					else if(s.charAt(j) == b) {
						temp += ')';
					}
					else {
						if(i==1) temp += ')';
						else temp += '(';
					}
				}
				if(test(temp)) {
					ans = true;
					break;
				}
			}
			if(ans) System.out.println("YES");
			else System.out.println("NO");
		}
	}
	public static boolean test(String s) {
		Stack<String> stack = new Stack();
		
		for(int i=0;i<s.length();i++) {
			if(s.charAt(i) == '(') {
				stack.add("(");
			}
			else {
				if(stack.isEmpty()) return false;
				stack.pop();
			}
		}
		if(stack.isEmpty()) return true;
		else return false;
	}
}
/*
4
AABBAC
CACA
BBBBAC
ABCA
*/