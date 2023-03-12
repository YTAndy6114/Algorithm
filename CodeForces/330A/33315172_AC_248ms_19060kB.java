import java.util.Scanner;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String s[] = new String[sc.nextInt()];
		String s1[] = new String[sc.nextInt()];
		int n[][] = new int[s.length][s1.length];
		int ans = 0;
		
		for(int i=0;i<s.length;i++) {
			s[i] = sc.next();
			if(!s[i].contains("S")) add(n, i, -1);
		}

		for(int i=0;i<s1.length;i++) {
			s1[i] = "";
			for(int j=0;j<s.length;j++) s1[i] += s[j].charAt(i);
				if(!s1[i].contains("S")) add(n, -1, i);
		}
		for(int i=0;i<n.length;i++) 
			for(int j=0;j<n[i].length;j++) if(n[i][j] >= 1) ans++;
			
		
		System.out.println(ans);
	}
	public static void add(int n[][],int i,int j) {
		if(i==-1) for(int x=0;x<n.length;x++) n[x][j]++;
		
		if(j==-1) for(int x=0;x<n[i].length;x++) n[i][x]++;
	}
}