using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace	SoloLearn
{
	class	Post
	{
		private string	text;

		public	Post()
		{
			Console.WriteLine("New post");
		}

		public void	ShowPost()
		{
			Console.WriteLine(text);
		}

		public string	Text
		{
			set { text = value; }
		}
	}

	class	Program
	{
		static void	Main(string[] args)
		{
			string	postText = Console.ReadLine();

			Post post = new Post();
			post.Text = postText;
			post.ShowPost();
		}
	}
}
