/*
** Variables can receive operation assignment;
** They can also be pre-incremented and post-decremented;
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
		static void Main(string[] args)
		{
			var num = 42;

			num -= 2;
			num += 2;
			num /= 2;
			num *= 2;
			num++;
			Console.WriteLine(--num);
		}
	}
}
