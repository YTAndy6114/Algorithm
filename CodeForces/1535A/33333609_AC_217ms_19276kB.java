import java.util.*;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t-- > 0) {
			int arr[] = new int[4];
			for(int i=0;i<4;i++) arr[i] = sc.nextInt();
			int max1 = Math.max(arr[0],arr[1]);
			int max2 = Math.max(arr[2],arr[3]);
			Arrays.sort(arr);
			int temp = arr[2] + arr[3];
			if(temp == max1 + max2) System.out.println("YES");
			else System.out.println("NO");
		}
	}
}