

import java.util.Scanner;

public class a {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = sc.nextInt();
			int d = sc.nextInt();
			int ans = 0 , count = 0, one = 0, two = 0;
			char x[][] = new char[a][b];
			for (int i = 0; i < a; i++) {
				String s = sc.next();
				count = 0;
				for (int j = 0; j < b; j++) {
					x[i][j] = s.charAt(j);
					if (x[i][j] == '.' & c*2 < d)
						ans++;
					if(c*2 >= d){
						if (x[i][j] == '.'){
							count++;
						}
						else{
							one += count;
							count=0;
						}
						if(count == 2){
							two++;
							count=0;
						}
					}
				}
				if(c*2>=d & count == 1) one++;
			}
			if(c*2<d) System.out.println(ans * c);
			else System.out.println( one * c + two * d);
		}

	}
}