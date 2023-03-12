

import java.util.Arrays;
import java.util.Scanner;

public class ProtectSheep {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), m = sc.nextInt();
		String s[][] = new String[n][m];
		String x[] = new String[n];
		boolean t = true;

		for (int i = 0; i < n; i++) {
			x[i] = sc.next();
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				s[i][j] = x[i].charAt(j)+"";
			}
		}
		
		A: for (int i = 0; i < s.length; i++) {
			for (int j = 0; j < s[i].length; j++) {
				if (s[i][j] .equals("S")) {
					if (!test(s, i, j)) {
						System.out.println("NO");
						t = false;
						break A;
					}
				}
			}
		}
		if(t) {
			System.out.println("YES");
			for(int i=0;i<n;i++) {
				for(int j=0;j<m;j++) {
					System.out.print(s[i][j]);
				}
				System.out.println();
			}
		}

	}

	public static boolean test(String s[][], int i, int j) {
		int up = i - 1;
		int down = i + 1;
		int right = j + 1;
		int left = j - 1;
		if (up > -1) {
			if (s[up][j] .equals("W")) {
				return false;
			}
			else if(s[up][j].equals(".")) { 
				s[up][j]= "D";
				
			}
		}
		if (down < s.length) {
			if (s[down][j] .equals("W")) {
				return false;
			}
			else if(s[down][j].equals(".")) { 
				s[down][j]= "D";
				
			}
		}
		if (right < s[0].length) {
			if (s[i][right] .equals("W")) {
				return false;
			}
			else if(s[i][right].equals(".")) { 
				s[i][right]= "D";
				
			}
		}
		if (left > -1) {
			if (s[i][left] .equals("W")) {
				return false;
			}
			else if(s[i][left].equals(".")) {
				s[i][left] = "D";
				
			}
		}
		return true;
	}
}
