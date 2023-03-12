
import java.util.*;

class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String st;
		
		while (sc.hasNextLine()) {
			st = sc.nextLine();
			
			char ch[] = st.toCharArray();
			int sum = 0;
			int max = 1;
			for (char a : ch) {
				int temp = 0;
				if (a >= 48 && a <= 57) {
					temp = a - 48;
				}
				if (a >= 65 && a <= 90) {
					temp = a - 55;
				}
				if (a >= 97 && a <= 122) {
					temp = a - 61;
				}
				sum=sum+temp;
				if(temp > max) max = temp;
			}
			for(int i =max ;i<=62;i++){
				if(i==62){
					System.out.println("such number is impossible!");
					break;
				}
				if(sum%i==0){
					System.out.println(i+1);
					break;
				}
			}
		}

	}
}
