

import java.util.*;

public class BusinessmenProblems {

	public static void main(String[] args) {
		Map<Long,Long> a = new HashMap();
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-->0) {
			Long name = sc.nextLong();
			Long value = sc.nextLong();
			if(a.containsKey(name)) {
				value = Math.max(a.get(name), value);
			}
			a.put(name,value);				
		}
		int t = sc.nextInt();
		while(t-->0) {
			Long name = sc.nextLong();
			Long value = sc.nextLong();
			if(a.containsKey(name)) {
				value = Math.max(a.get(name), value);
			}
			a.put(name,value);
		}
		Long ans = 0l;
		Set keySet = a.keySet();
		Iterator<Long> it = keySet.iterator();
		while(it.hasNext()) {
			Long i = it.next();
			ans += a.get(i);
		}
		System.out.println(ans);
	}
}
