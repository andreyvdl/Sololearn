/*
** Just like C we can have arrays;
** Arrays are objects, so you need to use the new keyword to create them;
** Notice the use of square brackets;
** As the common rule, indexes of arrays start at 0, so in a 5 size array we can access the elements from 0 to 4;
** We can also initialize the array, setting the values of the array on the declaration, if the value are set size is optional and the new keyword too;
** There are 2 ways to get the content of the array, with a loop that is limited to the size of the array or with foreach loop;
** The variable inside foreach must be the same of the array type, the foreach will iterate until the array is finished;
** If you don't know the type of the array you can use the var keyword;
*/


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace	SoloLearn
{
	class	Program
	{
		static void	Main(string[] args)
		{
			int[]		arr = new int[5];
			string[]	strs = new string[3] {"John", "Mary", "Jessica"};
			double[]	dbls = {1.2, 3.4, 5.6, 7.8};

			for (int i = 0; i < 5; i++)
				arr[i] = i * 3;
			for (int i = 0; i < 3; i++)
				Console.WriteLine(strs[i]);
			foreach (double d in dbls)
				Console.WriteLine(d);
			foreach (var n in arr)
				Console.WriteLine(n);
		}
	}
}
