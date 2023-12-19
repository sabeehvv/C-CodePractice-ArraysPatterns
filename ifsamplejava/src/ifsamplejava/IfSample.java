package ifsamplejava;

import java.util.Scanner;

public class IfSample {
	public static void main(String ar[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println(" enter a numbers");
		int num=sc.nextInt();
		System.out.println(" "+num);
		if(num<0) {
			System.out.println("Number is negative");
		}
		else {System.out.println("Number is Positive");
		}
}}
