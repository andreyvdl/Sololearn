/*
** The for loop execute a block of code a specified number of times;
** the difference between a while loop and a for loop is that the for loop you can initiate a value or not, and you can increment or decrement a value togheter with the condtional;
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
			int	y = 8;

			for (int x = 1; x < 11; x++)
				Console.WriteLine(x);
			for (; y < 257; y *= 2)
				Console.WriteLine(y);
		}
	}
}
