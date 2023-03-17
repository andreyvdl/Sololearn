/*
** As many programming languages, C# has arithmetic operators.
** The following operators are available:
		+	Addition;
		-	Subtraction;
		*	Multiplication;
		/	Division;
		%	Modulus;
** And as in all programming languages it follows PEMDAS rule;
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
			var	x = 5;
			var	y = 10;

			Console.WriteLine(x + y);
			Console.WriteLine(x - y);
			Console.WriteLine(x * y);
			Console.WriteLine(y / x);
			Console.WriteLine(y % x);
		}
	}
}
