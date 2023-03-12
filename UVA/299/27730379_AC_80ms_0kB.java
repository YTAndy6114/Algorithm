import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();//幾台車
		int temp;
		int answer=0;
		//1 2 3 4 5
		for(int i=0;i<N;i++){
			int X=sc.nextInt();//一台車有幾筆資料
			int a[]=new int[X];
			for(int j=0;j<X;j++){
				a[j]=sc.nextInt();
			}
			for(int b=X;b>0;b--){
				for(int c=0;c<b-1;c++){
					if(a[c]>a[c+1]){
						temp=a[c];
						a[c]=a[c+1];
						a[c+1]=temp;
						answer++;
					}
				}
			}
			
			System.out.print("Optimal train swapping takes "+answer+" swaps.\n");
			answer=0;
			
		}

	}

}
