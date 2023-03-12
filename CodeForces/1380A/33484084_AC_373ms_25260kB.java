import java.util.*;

public class ab{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int n[] = new int[sc.nextInt()];
			boolean b = true;
			for(int i = 0;i<n.length;i++) n[i] = sc.nextInt();
			for(int i=1;i<n.length-1;i++){
				if(n[i] > n[i-1] && n[i] > n[i+1]){
					System.out.println("YES");
					i++;
					System.out.println((i-1) + " " + i + " " + (i+1));
					b = false;
					break;
				}
			}
			if(b) System.out.println("NO");
		}
	}
}