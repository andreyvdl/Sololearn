/*
 * Create a program to show loading message to your application users.
 * Define a class Loading which has one public method called LoadingMessage(),
 * which should print "Loading" when called.
 * Create an object named loading and call that method.
 */

class Main
{
	public static void main(String[] args)
	{
		//create a Loading object with the same name
		Loading loading = new Loading();

		loading.LoadingMessage();
	}
}

class Loading
{
	//complete the class, add LoadingMessage() method
	void LoadingMessage()
	{
		System.out.println("Loading");
	}
}
