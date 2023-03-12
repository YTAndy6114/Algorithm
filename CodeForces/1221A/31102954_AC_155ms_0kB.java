import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			Map<Long , Integer> map = new HashMap();
			for(long i=1;i<2048;i*=2) {
				map.put(i,0);map.put(i*2,0);
			}
			int n = sc.nextInt();
			while(n-->0) {
				long x = sc.nextLong();
				if(x>2048)continue;
					map.put(x,map.get(x)+1); 
			}
			for(long i=1;i<2048;i*=2) {
					int total = map.get(i) / 2;
					map.put(i*2,total + map.get(i*2));
			}
			if(map.get(2048l)!=0)System.out.println("YES");
			else System.out.println("NO");
		}
	}
}