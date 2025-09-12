import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		
		
		Scanner input=new Scanner(System.in);
		System.out.print("no:");
		int no=input.nextInt();
		for(int i=0; i<no; i++)
		{
			for(int j=0; j<i ; j++)
			{
				System.out.print("#");
			}
		System.out.println();
				}
		input.close();
	}
}