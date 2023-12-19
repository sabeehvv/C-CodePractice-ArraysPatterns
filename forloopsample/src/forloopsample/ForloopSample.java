package forloopsample;

import java.util.Scanner;

public class ForloopSample {
	public static void main(String ar[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a numbers");
		int num=sc.nextInt();
		int i;
		int sum=0;
		for(i=0;i<num;i++) {
			sum=sum+i;
		}
		System.out.println("Result is : "+sum);
	}

}
