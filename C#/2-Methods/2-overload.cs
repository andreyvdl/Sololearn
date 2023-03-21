/*
** Overloads occours when two methods have the same name but different arguments that isn't bad, with overloads one method can do multiple things;
** Only overload parameters are different if the return is different it will generate a error;
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
			print(-0123);
			print(-0.1415);
		}
		static void	print(int x)
		{
			Console.WriteLine(x);
		}
		static void	print(double x)
		{
			Console.WriteLine(x);
		}
	}
}
