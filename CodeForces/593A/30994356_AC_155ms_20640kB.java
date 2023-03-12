import java.util.Scanner;

public class twoChar {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String x[] = new String[1000];
		for(int i=0;i<n;i++) x[i] = sc.next();
		int maxn = -1;
	    for(char i = 'a';i <= 'z';i++)
	    {
	        for(char j = 'a';j <= 'z';j++)
	        {
	            int len = 0;
	            for(int k = 0;k < n;k++)
	            {
	                boolean flag = true;
	                for(int h = 0;h < x[k].length();h++)
	                {
	                    if((x[k].charAt(h) != i) && (x[k].charAt(h) != j)){
	                    	flag = false;break;
	                    }
	                }
	                if(flag)    len += x[k].length();
	            }
	            maxn = Math.max(maxn,len);
	        }
	    }
	    System.out.println(maxn);
	}
}