using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace	SoloLearn
{
	class	Program
	{
		static void Main(string[] args)
		{
			const double	PI = 3.14;
			double			radius;

			Console.WriteLine("Enter the radius of the circle:");
			radius = Convert.ToDouble(Console.ReadLine());
			Console.WriteLine(radius * radius * PI);
		}
	}
}
