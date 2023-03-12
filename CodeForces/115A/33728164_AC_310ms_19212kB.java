import java.util.*;

public class a {
	static int f[] = new int[2002];
	static boolean v[] = new boolean[2002];
	static int ans = 0;
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0;i<n;i++) f[i] = sc.nextInt();
		for(int i=0;i<n;i++)
			if(!v[i])
				dfs(i,1);
		System.out.println(ans);
	}
	public static void dfs(int position , int height){
		v[position] = true;
		
		if(f[position] == -1){
			if(height > ans){
				ans = height;
			}
			return;
		}
		dfs(f[position]-1 , height+1);
	}
}