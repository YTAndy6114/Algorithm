import java.util.Arrays;
import java.util.Scanner;
class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-- > 0){
			int x = sc.nextInt();
			int arr[] = new int[x];
			for(int i =0;i<x;i++) arr[i]=sc.nextInt();
			int temp = 0;
			int sum = 0;
			for(int i=0;i<arr.length;i++){
		    	for(int j=0;j<arr.length-1;j++){
		    	   if(arr[j]>arr[j+1]){
		    		  temp = arr[j];
		    		  arr[j] = arr[j+1];
		    		  arr[j+1] = temp; 
		    		  sum++;
		    	   }
		    	}
		    	
		    }
			System.out.printf("Optimal train swapping takes %d swaps.\n",sum);
		}
	}
}
//1 2 3 4 5