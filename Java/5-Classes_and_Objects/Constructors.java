/*
 * Constructors set default values to the object.
 * They can be user defined or just default.
 * A constructor must NOT have a return type, but it can have access modifiers.
 */

class Main
{
	public static void main(String[] args)
	{
		Vehicle car = new Vehicle();
		Vehicle bike = new Vehicle("Red");

		System.out.println("Car color: " + car.getColor());
		System.out.println("Bike color: " + bike.getColor());
	}
}

class Vehicle
{
	private String color;

	Vehicle() // this is a default constructor
	{
		this.color = "Blue";
	}
	Vehicle(String userColor) // this is an user defined constructor
	{
		this.color = userColor;
	}
	String getColor()
	{
		return this.color;
	}
}
