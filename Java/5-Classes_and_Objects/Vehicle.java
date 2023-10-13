/*
 * Classes can have attributes and methods.
 * Attributes are variables within a class.
 */

class Main
{
	public static void main(String[] args)
	{
		Vehicle car = new Vehicle();
		
		car.maxSpeed = 210;
		car.wheels = 4;
		car.color = "Yellow";
		car.fuelCapacity = 42.0;

		System.out.println("A " + car.color + " car going at " + car.maxSpeed
		                   + " km/h!");
		car.horn();
	}
}

public class Vehicle
{
	int		maxSpeed;
	int		wheels;
	String	color;
	double	fuelCapacity;

	void horn()
	{
		System.out.println("Beep!");
	}
}
