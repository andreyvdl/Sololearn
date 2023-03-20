/*
** We can use if-else in C# just line many other languages;
** in case of one line hte brackets can be omitted;
** The relational operators are:
	> Geater than
	< Less than
	>= Greater than or equal to
	<= Less than or equal to
	== Equal to
	!= Not equal to
** else is optional, and it's executed when the result of the if is false;
** We can have nested if-else statements;
** else if permit us to have an else conditional;
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace	SoloLean
{
	class	Program
	{
		static void	Main(string[] args)
		{
			int	x = 8;
			int	y = 3;

			if (x > y)
			{
				Console.WriteLine("x is greater than y");
				if (x > 10)
					Console.WriteLine("x is greater than 10");
				else if (x == 10)
					Console.WriteLine("x is equal to 10");
				else
					Console.WriteLine("x is less than 10");
			}
			else
				Console.WriteLine("x is less than or equal to y");
		}
	}
}
