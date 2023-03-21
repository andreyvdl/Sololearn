/*
** Methods are pretty much functions;
** In C# methods can have default values for their arguments;
** Default values make sure that the method will work even without arguments;
** Default values are set in the method declaration;
** In C# we have named arguments, so we can input arguments in any order;
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
			Console.WriteLine("POW:");
			for (int i = 2; i < 5; i++)
			{
				Pow(i);
				Pow(i, 3);
			}
			Console.WriteLine("VOL:");
			for (int i = 1; i < 5; i++)
			{
				Volume(y: i, x: i * 2);
				Volume(z: i, x: i * 2, y: i * 3);
			}
		}
		static void	Pow(int x, int y = 2)
		{
			int	result = x;

			for (int i = 1; i < y; i++)
				result *= x;
			Console.WriteLine(result);
		}
		static void	Volume(int x, int y, int z = 1)
		{
			Console.WriteLine(x * y * z);
		}
	}
}
