import  java.util.*;
public class Test1 {
	public static void main(String[] args) {
		Scanner scanner =new Scanner(System.in);
		int n[] = new int[scanner.nextInt()];
		boolean t = false;
		for(int i=0;i<n.length;i++) {
			n[i] = scanner.nextInt();
		}
		Arrays.sort(n);
		for(int i=0;i<n.length-2;i++) {
			if(n[i]+n[i+1] > n[i+2]) {
				t = true;
				break;
			}
		}
		if(t)System.out.println("YES");
		else System.out.println("NO");
	}
}