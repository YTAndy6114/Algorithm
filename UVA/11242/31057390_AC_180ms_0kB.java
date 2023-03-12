import java.util.ArrayList;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(true) {
			ArrayList<Double> arr = new ArrayList();
			double n[] = new double[sc.nextInt()];
			if(n.length == 0) break;
			double k[] = new double[sc.nextInt()];
			for (int i = 0; i < n.length; i++)	n[i] = sc.nextDouble();
			for (int i = 0; i < k.length; i++)	k[i] = sc.nextDouble();
			for(int i =0;i<n.length;i++) {
				for(int j=0;j<k.length;j++) {
					arr.add((double) (n[i] / k[j]));
				}
			}
			arr.sort(null);
			double ans = 0;
			for(int i=1;i<arr.size();i++) {
				if(ans < arr.get(i)/arr.get(i-1)) {
					ans = arr.get(i)/arr.get(i-1);
				}
			}
			System.out.printf("%.2f\n",ans);
		}
	}
}
