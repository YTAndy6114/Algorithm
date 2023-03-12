import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), word[] = new int[26];
		String s = sc.next() , ans = "";
		boolean b = true;
		boolean bool = true;
		for (int i = 0; i < s.length(); i++) {
			word[s.charAt(i) - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if(word[i] % n != 0) {
				bool = false;
				break;
			}
			else{
				for(int j=0;j<word[i]/n;j++)
					ans+=(char)(i+'a');
			}
		}
		if (bool) {
			for (int i = 0; i < n; i++) {
				System.out.print(ans);
			}
			System.out.println();
		}
		else System.out.println(-1);
	}
}