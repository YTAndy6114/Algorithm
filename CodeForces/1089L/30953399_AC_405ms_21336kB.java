import java.util.*;
public class LazyLand {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<Long> arr = new ArrayList();	// 分配工作
		Map<Integer , Long> map = new HashMap();	// 裝確定工作的
		int people = sc.nextInt();
		int work = sc.nextInt();
		int a[] = new int[people];
		Long b[] = new Long[people];
		for(int i=0;i<a.length;i++) a[i] = sc.nextInt();
		for(int i=0;i<b.length;i++) b[i] = sc.nextLong();
		for(int i=0;i<a.length;i++) {
			if(map.containsKey(a[i])) {
				if(map.get(a[i]) < b[i]) {
					arr.add(map.get(a[i]));
					map.put(a[i],b[i]);
				}
				else {
					arr.add(b[i]);
				}
			}
			else {
				map.put(a[i],b[i]);
			}
		}
		arr.sort(null);
		Long ans = 0l;
		for(int i=0;i<work-map.size();i++) {
			ans += arr.get(i);
		}
		System.out.println(ans);
	}
}