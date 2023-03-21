/*
** When we put a argument on the mathod parameter, we only use it value;
** Unlike C, in C# we pass variables using the ref keyword;
** ref needs to be used in the method declaration and on the call;
** The out keyword is good for setting not initialized variables;
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
			int	anwser = 0;
			int	n;

			Console.WriteLine("REF:");
			Console.WriteLine(anwser);
			notChange(anwser);
			Console.WriteLine(anwser);
			refChange(ref anwser);
			Console.WriteLine(anwser);
			Console.WriteLine("OUT:");
			outChange(out n);
			Console.WriteLine(n);
		}
		static void	notChange(int num)
		{
			num = 42;
		}
		static void	refChange(ref int num)
		{
			num = 42;
		}
		static void	outChange(out int nbr)
		{
			nbr = 42;
		}
	}
}
