public class Methods
{
	// methods need static to be called by main
	// overload is when 2 methods have the same name but different parameters
	static void welcome()
	{
		System.out.println("Welcome");
		System.out.println("I am a method");
		System.out.println("End of method");
	}
	static void welcome(String name)
	{
		if (name == null)
			System.out.println("Error");
		else
			System.out.println("Welcome " + name);
	}
	static void welcome(String name, int age)
	{
		if (age == 1)
			System.out.println("Welcome " + name + " you have " + age + " year");
		else if (age > 1)
			System.out.println("Welcome " + name + " you have " + age + " years");
		else
			System.out.println("Error");
	}
	// methods can return a value relative to their return type
	boolean isPrime(int n)
	{
		if (n <= 1)
			return (false);
		if (n == 2 || n == 3 || n == 5 || n == 7)
			return (true);
		for (int i = 2; i <= 7; ++i)
			if (n % i == 0)
				return (false);
		return (true);
	}
	public static void main(String[] args)
	{
		welcome();
		welcome("Andrey");
		welcome("Andrey", 23);
		System.out.println(isPrime(42));
	}
}
