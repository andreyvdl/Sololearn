/*
** A constructor is a method with the same name of the class, it will execute every time you create an object of that class;
** Constructors can receive arguments and be overloaded;
** The argument receive is used when creating a new object
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
			Person	p1 = new Person();
			Person	p2 = new Person("Joe");

			Console.WriteLine(p2.getName());
		}
	}
	class	Person
	{
		private int	age;
		private string	name;
		public	Person()
		{
			Console.WriteLine("Hi there");
		}
		public	Person(string nm)
		{
			name = nm;
		}
		public string	getName()
		{
			return (name);
		}
	}
}
