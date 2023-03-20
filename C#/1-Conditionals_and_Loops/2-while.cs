/*
** A while loop will execute a block of code as long as a specified condition is true;
** The difference between a while loop and a do-while loop is that the do-while loop will execute the code block at least once, even if the condition is false;
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
			int	x = 1;

			Console.WriteLine("While loop:");
			while (x < 6)
			{
				Console.WriteLine(x);
				x++;
			}
			Console.WriteLine("Do-While loop:");
			do
			{
				x++;
				Console.WriteLine(x);
			} while (x < 6);
		}
	}
}
