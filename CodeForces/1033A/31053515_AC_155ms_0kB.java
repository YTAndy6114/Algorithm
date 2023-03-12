import java.util.Scanner;
public class KingEscape {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(); // n*n
		int Qx = sc.nextInt() , Qy = sc.nextInt();
		int Kx = sc.nextInt() , Ky = sc.nextInt();
		int Mx = sc.nextInt() , My = sc.nextInt();
		if(Mx == Qx || My == Qy || (Math.abs(Qx-Mx) == Math.abs(Qy-My))) System.out.println("NO");
		else if((Qx > Mx) & (Qx < Kx) || (Qx < Mx) & (Qx > Kx) || (Qy > My) & (Qy < Ky) || (Qy < My) & (Qy > Ky))
			System.out.println("NO");
		else System.out.println("YES");
	}
}