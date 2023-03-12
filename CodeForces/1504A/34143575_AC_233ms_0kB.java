import java.util.Scanner;

public class A {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-- > 0){
			String s = sc.next() , s1 = s + "a" , s2 = "a" + s , temp1 = s1 , temp2 = s2;
			s1 = new StringBuilder(s1).reverse().toString();
			s2 = new StringBuilder(s1).reverse().toString();
			if(!s1.equals(temp1)) {
				System.out.println("YES\n" + temp1);
			}
			else if(!s2.equals(temp2)) {
				System.out.println("YES\n" + temp2);				
			}
			else System.out.println("NO");
		}
	}
}
