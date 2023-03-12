import java.util.ArrayList;
import java.util.Scanner;

class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			long x = Integer.valueOf(sc.nextLine());
			String s[] = sc.nextLine().split("\\s+");
			
			long sum = 0;
			if (s.length == 1)
				System.out.println(0);
			else {
				long pow = 1L;
				for (int i = 1; i < s.length; i++, pow *= x) {
					sum += i*pow*Integer.valueOf(s[s.length-i-1]);
				}
				System.out.println(sum);
			}	
		}
	}
}
