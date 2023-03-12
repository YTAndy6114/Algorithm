import java.util.*;
public class Main {
 
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			Queue<Integer> q = new LinkedList();
			Queue<Integer> p = new LinkedList();
			int num[] = new int[10];
			int n = sc.nextInt();
			int m = sc.nextInt();
			for(int i=0;i<n;i++) {
				if(i==m)p.add(1);
				else p.add(0);
				int x = sc.nextInt();
				q.add(x);
				num[x]++;
				
			}
			int ans=0;
		A:	for(int i=9;i>0;i--) {
				if(num[i]==0) continue;
				while(true) {
					if(q.peek()!=i) {
						q.offer(q.poll());
						p.offer(p.poll());
					}
					else {
						if(p.peek()==1) {
							ans++;
							break A;
						}
						q.poll();
						p.poll();
						ans++;
						num[i]--;
					}
					if(num[i]==0)continue A;
				}
			}
			System.out.println(ans);
		}
	}
}