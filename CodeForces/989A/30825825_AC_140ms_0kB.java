import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		boolean t = false;
		for(int i=1;i<s.length()-1;i++) {
			if(s.charAt(i)=='A') {
				if(s.charAt(i+1)=='C') {
					if(s.charAt(i-1)=='B') {
						t = true;
						break;
					}
				}
				else if(s.charAt(i-1)=='C') {
					if(s.charAt(i+1)=='B') {
						t = true;
						break;
					}
				}
			}
			else if(s.charAt(i)=='B') {
				if(s.charAt(i+1)=='C') {
					if(s.charAt(i-1)=='A') {
						t = true;
						break;
					}
				}
				else if(s.charAt(i-1)=='C') {
					if(s.charAt(i+1)=='A') {
						t = true;
						break;
					}
				}
			}
			else if(s.charAt(i)=='C') {
				if(s.charAt(i+1)=='A') {
					if(s.charAt(i-1)=='B') {
						t = true;
						break;
					}
				}
				else if(s.charAt(i-1)=='A') {
					if(s.charAt(i+1)=='B') {
						t = true;
						break;
					}
				}
			}
		}
		if(t)System.out.println("Yes");
		else System.out.println("No");

	}
}
