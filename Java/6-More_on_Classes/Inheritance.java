/*
 * You are developing your own photo editing application.
 * The standard free version allows you to draw and write text on a photo.
 * The Pro subscription has 2 more features - the ability to use effects
 * and the ability to change resolution.
 * Complete/fix the given code to inherit Pro class from Standard class
 * and successfully execute all the given method calls.
 */

//be attentive to access modifiers
class Standard
{
	protected void draw()
	{
		System.out.println("Drawing");
	}

	protected void write()
	{
		System.out.println("Writing");
	}
}
//fix the class
class Pro extends Standard
{
	protected void useEffects()
	{
		System.out.println("Using Effects");
	}

	protected void changeResolution()
	{
		System.out.println("Changing Resolution");
	}
}

class Main
{
	public static void main(String[] args)
	{
		Standard	standard1 = new Standard();
		Pro 		pro1 = new Pro();

		//standard version
		standard1.draw();
		standard1.write();

		//Pro version
		pro1.draw();
		pro1.write();
		pro1.useEffects();
		pro1.changeResolution();
	}
}
