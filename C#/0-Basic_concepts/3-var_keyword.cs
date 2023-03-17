/*
** The "var" keyword creates a variable that needs to be assigned on the same line, when that happens the type of the variable will be defined automatically;
** The "const" keyword creates a constant variable, like "var" const variables need to be assigned on the same line;
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
			var	num = 15;
			const double PI = 3.14;

			Console.WriteLine(num);
			Console.WriteLine(PI);
		}
	}
}
