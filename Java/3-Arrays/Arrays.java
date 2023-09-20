import java.util.Scanner;

public class Arrays
{
	public static void main(String[] args)
	{
		Scanner	scan = new Scanner(System.in);
		// to create an array we need to add the square brackets after the type
		// then we need to say the size of the array with the new keyword
		// other way is to directely initiate the array if you know the content
		// int[] arr = {1, 5, 3, 2, 4};
		int[]	arr = new int[5];

		for (int i = 0; i < 5; ++i)
		{
			System.out.print("Input a number: ");
			arr[i] = scan.nextInt();
		}
		System.out.println("Array: ");
		for (int i = 0; i < 5; ++i)
			System.out.println(arr[i]);
	}
}
