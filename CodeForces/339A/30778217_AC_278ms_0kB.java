import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<String> arr = new ArrayList<String>();
		String s = sc.nextLine();
		for (int i = 0; i < s.length(); i++) {
			if (!((s.charAt(i) + "").equals("+"))) {
				arr.add(s.charAt(i) + "");
			}
		}
		Collections.sort(arr);
		boolean t = true;
		for (String x : arr) {
			if (t) {
				System.out.print(x);
				t = false;
			} else
				System.out.print("+" + x);
		}
	}

}
