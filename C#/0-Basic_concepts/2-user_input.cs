/*
** "Console.ReadLine()" will read the user input and return it as a string;
** "ReadLine()" doesn't receive any parameters, that is a called a void method;
** We have many functions to convert a type to another "Convert.ToBool()", "Convert.ToInt32()", "Convert.ToDouble()", "Convert.ToChar()", "Convert.ToString()";
** Like C the comments can be done with "//" while comment blocks can be done with slash asterisk;
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
			string	yourName;
			int		age;

			Console.WriteLine("What is your name?");
			yourName = Console.ReadLine();
			Console.WriteLine("What is your age?");
			age = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine("Hello {0} you have {1} years.", yourName, age);
		}
	}
}
