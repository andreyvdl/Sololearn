/*
** Classes are like blueprints of buildings, they define the properties and methods of an object;
** Classes can have content as private, public, protected, internal or protected internal;
** Private is only accessible inside the class or by public methods outside the class;
** Public is accessible everywhere;
** The new keyword creates a new object, in this case we are creating a new person object;
** The object can be used as local structs in C;
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
		class	Person
		{
			int		age;
			string	name;

			public void	sayHi()
			{
				Console.WriteLine("Hi");
			}
		}
		class	Dog
		{
			public string	name;
			public int		age;
		}
		static void Main(string[] args)
		{
			Person	p1 = new Person();
			Dog		bob = new Dog();

			p1.sayHi();
			bob.name = "Bobby";
			bob.age = 3;
			Console.WriteLine(bob.age);
		}
	}
}
