import java.util.Arrays;
import java.util.Scanner;
class Main{
	public static int a(String s) {
		int sum = 0;
		for(int i=0;i<s.length();i++) {
			if(s.charAt(i)=='1')
				sum =(int)(sum + Math.pow(2,s.length()-1-i));
		}
		return sum;
	}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++){
			String s1 = sc.next();
			String s2 = sc.next();
			int a=a(s1);
			int b=a(s2);
			int temp=0;
			while(a%b!=0) {
				temp = a;
				a= b;
				b= temp%a;
			}
			if(b==1) System.out.println("Pair #"+(i+1)+": Love is not all you need!");
			else System.out.println("Pair #"+(i+1)+": All you need is love!");
		}
	}
}
