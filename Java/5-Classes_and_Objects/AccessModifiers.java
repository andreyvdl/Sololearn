/*
 * Java has keywords that modify access control for classes
 * They are: "public", "default", "private" and "protected".
 * Public means that every class has access.
 * Default means that only classes in the same package have access.
 * Protect is the same as default, but also allows subclasses to access.
 * Private means that only the class itself has access.
 */
public class AccessModifiers
{
	public static void main(String[] args) // everyone has access to main
	{
		Vehicle motocycle = new Vehicle();

		// the line below will generate a error because wheels is private
		// motocycle.wheels = 2;
		motocycle.setWheels(3);
		motocycle.horn();
		System.out.println("This bike has " + motocycle.getWheels()
		                   + " wheels!");
	}
}

public class Vehicle
{
	private int    maxSpeed;
	private int    wheels;
	private String color;
	private double fuelCapacity;

	public void horn()
	{
		System.out.println("beep");
	}
	public void	setWheels(int wheels)
	{
		this.wheels = wheels;
	}
	public int getWheels()
	{
		return this.wheels;
	}
}
