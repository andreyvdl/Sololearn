/*
** For a if substitution we can use the ternary operator (expr ? true : false);
** sadly it can only be used as assignment;
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
			int		age = 22;
			string	result;
			
			result = (age > 18) ? "Adult" : "Not adult";
			Console.WriteLine(result);
		}
	}
}
