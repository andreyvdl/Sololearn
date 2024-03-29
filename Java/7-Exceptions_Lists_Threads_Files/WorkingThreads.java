/*
 * We are writing a registration program for our app. At first it should
 * welcome the users, then ask the users to enter their names.
 * But program you are given executes this sequence in reverse order.
 * Complete the program by extending the Thread class for Welcome and Name
 * classes, then setting priorities for their run methods so that the program
 * outputs the messages in the correct order.
 */

class Main
{
	public static void main(String[ ] args)
	{
		Name name = new Name();
		//set priority
		name.setPriority(Thread.MIN_PRIORITY);
		Welcome welcome = new Welcome();
		//set priority
		welcome.setPriority(Thread.MAX_PRIORITY);
		/*
		 * Priority is set to the right values, but java is stupid and don't
		 * do what i tell it to do... FKY java :)
		 */
		name.start();
		welcome.start();
	}
}

//extend the Thread class
class Welcome extends Thread
{
	public void run()
	{
		System.out.println("Welcome!");
	}
}

//extend the Thread class
class Name extends Thread
{
	public void run()
	{
		System.out.println("Please enter your name");
	}
}
