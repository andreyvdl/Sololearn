/*
** To compile in linux:
	sudo apt install mono-complete
	mcs [-out:<output_name>.exe] <filename>.cs
	mono <filename>.exe
** To start we have 2 methods:
** "Console.Write(void)" will print the parameter;
** "Console.WriteLine(void)" will print the parameter and a new line after it;
** To print a string with paramenters use "{n}" being "n" the parameter number;
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sololearn
{
	class Program
	{
		static void Main(string[] args)
		{
			int	anwser = 42;

			Console.WriteLine("Hello World!");
			Console.WriteLine(anwser);
			Console.WriteLine("The answer is {0}", anwser);
		}
	}
}