/*
 * Java is the oposite of other languages, the classes and functions/methods
 * must be declared after the main function.
 * 
 * The keyword new creates a new objecto of a class, in this case a new Animal.
 */

class Main
{
	public static void main(String[] args)
	{
		Animal dog = new Animal();
		dog.bark();
	}
}

public class Animal
{
	void bark()
	{
		System.out.println("Woof-Woof");
	}
}
