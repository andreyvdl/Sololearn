/*
** Switch statements are much like a series of if-else statements;
** the break keyword is obligatory in each case;
** if none of the cases are true switch will execute the default case;
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
			int	num = 3;

			switch (num)
			{
				case 1:
					Console.WriteLine("One");
					break;
				case 2:
					Console.WriteLine("Two");
					break;
				case 3:
					Console.WriteLine("Three");
					break;
				default:
					Console.WriteLine("Invalid number");
					break;
			}
		}
	}
}
