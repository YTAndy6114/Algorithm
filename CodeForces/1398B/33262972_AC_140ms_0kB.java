import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-->0) {
			String s = sc.next();
			String temp[] = s.split("0");
			int ans = 0 , times = 0;
			ArrayList<Integer> arrayList = new ArrayList<>();
			for(int i=0;i<temp.length;i++) if(temp[i].length() > 0) arrayList.add(temp[i].length());
			Object a[] = arrayList.toArray();
			Arrays.sort(a);
			for(int i=a.length-1;i>=0;i--,times++) { 
				if(times % 2 == 0) ans += (int)a[i];
			}
			System.out.println(ans);
		}
	}
}