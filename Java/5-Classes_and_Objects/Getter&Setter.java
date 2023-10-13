/*
 * Getters and Setters are methods that let you protect and access data.
 * Getters get info.
 * Setters set info.
 * Normally we see they usuing the keyword `this`, it refers to the object.
 */

public class AccessModifiers
{
	public static void main(String[] args) // everyone has access to main
	{
		Vehicle plane = new Vehicle();

		plane.setWheels(6);
		plane.setMaxSpeed(600);
		plane.setColor("White");
		plane.setFuelCapacity(1000.00);
		if (plane.getLandingGear() == true)
		{
			System.out.println("Landing gear is ready to land");
		}
		plane.toggleLandingGear();
		if (plane.getLandingGear() == false)
		{
			System.out.println("Landing gear is not ready to land");
		}
	}
}

public class Vehicle
{
	private int     maxSpeed;
	private int     wheels;
	private String  color;
	private double  fuelCapacity;
	private boolean landingGear = true;

	public void	setWheels(int wheels)
	{
		this.wheels = wheels;
	}
	public int getWheels()
	{
		return this.wheels;
	}
	public void setMaxSpeed(int maxSpeed)
	{
		this.maxSpeed = maxSpeed;
	}
	public int getMaxSpeed()
	{
		return this.maxSpeed;
	}
	public void setColor(String color)
	{
		this.color = color;
	}
	public String getColor()
	{
		return this.color;
	}
	public void setFuelCapacity(double fuelCapacity)
	{
		this.fuelCapacity = fuelCapacity;
	}
	public double getFuelCapacity()
	{
		return this.fuelCapacity;
	}
	public boolean getLandingGear()
	{
		return this.landingGear;
	}

	public void toggleLandingGear()
	{
		this.landingGear = !this.landingGear;
	}
}
