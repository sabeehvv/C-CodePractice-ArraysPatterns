package classSample2;

public class ClassSampe2 {
	public static void main(String sb[]){
		
		ClassSampleclass object1=new ClassSampleclass();
		ClassSampleclass object2=new ClassSampleclass();
		
		object1.num1=10;
		object1.num2=20;
		object2.num1=30;
		object1.num1=40;
		object2.num2=50;
		
		object1.calculatesum();
		object2.calculatesum();
		
		
		object1.display();
		object2.display();
		
	}

}
