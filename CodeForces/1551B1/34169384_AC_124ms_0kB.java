

import java.util.Scanner;

public class A {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
			int w[] = new int[26],ans = 0,times = 0;
			String s = sc.next();
			for(int i=0;i<s.length();i++){
				w[s.charAt(i)-'a']++;
			}
			for(int i=0;i<26;i++){
				if(w[i] >=2) ans++;
				else if(w[i] == 1) times++;
			}
			System.out.println(ans + times/2);
		}
	}
}
