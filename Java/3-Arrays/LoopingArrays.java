public class LoopingArrays
{
	public static void main(String[] args)
	{
		int[]	nums = {42, 21, 23};

		// length returns the number of elements in the array
		System.out.println(nums.length); 
		// a for-each loop will loop through each element in the array
		// putting that item into a variable 
		for (int x: nums)
			System.out.println(x);
	}
}
