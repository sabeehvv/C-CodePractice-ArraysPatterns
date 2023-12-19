package functionSample;

import java.util.Scanner;

public class FunctionSample {
	public static void main(String ar[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter 2 numbers");
		
		int num1=sc.nextInt();
		int num2=sc.nextInt();
		
		int Result=sum(num1,num2);
		
		System.out.println("result ="+Result);
		
		
		
	}
	static int sum(int a,int b) {
		int s=a+b;
		return s;
	}

}
