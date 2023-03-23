/*
** Properties permit us to acess private variables as if they were public;
** Properties can have any name, but for easy understanding we use the same name as the variable but with the first letter in uppercase;
** With get accessor keyword we can get the value of the variable;
** With set accessor keyword we can set the value of the variable;
** The value keyword adds the value to the variable;
** Now properties can be used just like methods and public variables;
** Accessor can be omitted, so you can have them as read-only or write-only;
** If the property is private it can only be used by the class;
** Inside of accessors we can use if statements;
** We don't need the specify the get and set options we can just say: "public string Name { get; set; }" they will immediately know what you want;
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace	SoloLearn
{
	class	Person
	{
		private string	name;
		public string	Name
		{
			get { return (name); }
			set { name = value; }
		}
	}
	class	Program
	{
		static void Main(string[] args)
		{
			Person	p = new Person();
			p.Name = "Bob";
			Console.WriteLine(p.Name);
		}
	}
}
