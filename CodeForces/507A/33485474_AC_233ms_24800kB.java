import java.util.*;

public class fuck {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n[] = new int[sc.nextInt()];
		int t[] = new int[n.length];
		int m = sc.nextInt() , count = 0 , ans = 0;
		String a = "";
		for(int i=0;i<n.length;i++){
			n[i] = sc.nextInt();
			t[i] = n[i];
		}
		Arrays.sort(n);
		for(int i=0;i<n.length;i++){
			if(count + n[i] <= m){
				for(int j=0;j<n.length;j++){
					if(n[i] == t[j]){
						t[j] = -1;
						a += (j+1)+" ";
						ans++;
						break;
					}
				}
				count += n[i];
			}
		}
		if(count == 0)	System.out.println(0);
		else{
			System.out.println(ans);
			System.out.println(a);
		}
	}
}