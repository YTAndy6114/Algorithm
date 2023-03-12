import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;


public class test1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String a = sc.next(),temp="";
		ArrayList<Integer> list = new ArrayList();
		for(int i=0;i<a.length();i++) {
			if(a.charAt(i)!='+') temp += a.charAt(i);
			if(a.charAt(i) == '+' || i == a.length()-1){
				list.add(Integer.parseInt(temp));
				temp = "";
			}
		}
		int ans[] = new int[list.size()];
		for(int i=0;i<ans.length;i++){
			ans[i] = list.get(i);
		}
		Arrays.sort(ans);
		for(int i=0;i<ans.length;i++) {
			System.out.print(ans[i]);
			if(i!=ans.length-1) System.out.print("+");
		}
		
		System.out.println();
	}
}
