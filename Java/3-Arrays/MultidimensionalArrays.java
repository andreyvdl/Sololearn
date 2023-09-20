public class MultidimensionalArrays
{
	public static void main(String[] args)
	{
		int[][]	matrix = {{1},
			{2, 3},
			{4, 5, 6},
			{7, 8},
			{9}};

		// a multidimensional array is an array of arrays
		// length can be used to get the number of rows
		// and length of each row can be used to get the number of columns
		for (int i = 0; i < matrix.length; i++)
			for (int j = 0; j < matrix[i].length; j++)
				System.out.println(matrix[i][j]);
	}
}
