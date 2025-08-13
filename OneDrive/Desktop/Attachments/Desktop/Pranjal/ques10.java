import java.util.Scanner;
class Ques10
{
	public static void main(String[]args)
 {	
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter 1 number : ");
	int num1 = sc.nextInt();
	System.out.println("Enter 2 number : ");
	int num2 = sc.nextInt();
	int num3;
	while(num1%num2!=0){
		num3 = num1%num2;
		num1 = num2;
		num2 = num3;
	}
	System.out.println(num2);
 }
}
