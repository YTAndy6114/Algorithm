import java.util.Scanner;

class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			String x= sc.nextLine();
			if(x.equals("0")) break;					
			
			int a = 0;
			int b = 0;
			for(int i=0;i<x.length();i++){
				if(i%2==0) a+=Character.getNumericValue(x.charAt(i));
				else b+=Character.getNumericValue(x.charAt(i));
			}
			if (( a-b) %11 ==0) System.out.printf("%s is a multiple of 11.\n",x);
 
			else System.out.printf("%s is not a multiple of 11.\n",x);
		}
	}
}
