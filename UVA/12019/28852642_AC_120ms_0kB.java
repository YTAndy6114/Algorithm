import java.util.Scanner;

class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		
		int cases=sc.nextInt();
		for(int i=0;i<cases;i++){
			int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
			String week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
			int M=sc.nextInt();
			int D=sc.nextInt();
			// 1/1 Saturday 1/2 Sunday
			D+=4;
			for(int j=1;j<M;j++) {
				D+=month[j-1];
			}
			System.out.println(week[D%7]);
			
		}
	}
}