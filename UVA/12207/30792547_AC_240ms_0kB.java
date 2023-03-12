import java.util.ArrayList;
import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = 1;
		while (true) {
			Long p = sc.nextLong();
			int t = sc.nextInt();
			if (p == 0 & t == 0) {
				break;
			}
			String s[] = new String[t];
			ArrayList<Long> arr = new ArrayList();
			if(p>1000) p =1000l;
			for (Long i = 1l; i <= p; i++)arr.add(i);
				
			for (int i = 0; i < t; i++) {
				String ts = sc.nextLine();
				if (ts.equals(""))
					ts = sc.nextLine();
				s[i] = ts;
			}
			System.out.println("Case " + x + ":");
			x++;
			for (int i = 0; i < t; i++) {
				if (s[i].contains("N")) {
					System.out.println(arr.get(0));
					arr.add(arr.remove(0));
				} else if (s[i].contains("E")) {
					Long n = Long.parseLong(s[i].substring(2));
					arr.remove(n);
					arr.add(0, n);
				}
			}
		}
	}
}
