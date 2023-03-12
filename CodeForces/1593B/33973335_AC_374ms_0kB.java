import java.util.*;


public class test1 {
	
	public static void main(String args[]) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		while(n-- > 0) {
			String s = scanner.next();
			int min = s.length();
			for(int i=0;i<s.length();i++) {
				for(int j=i+1;j<s.length();j++) {
					int ten = Integer.parseInt(s.charAt(i)+"")*10;
					int one = Integer.parseInt(s.charAt(j)+"");
					if((ten+one)%25==0) {
						min = Math.min(min,(-1*i-2+s.length()));
					}
				}
			}
			System.out.println(min);
		}
		
	}
	
}