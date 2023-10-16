/*
 * Packages are used to avoid name conflicts and to control access of class,
 * interface and enumeration etc.
 */

// import MyPackages.*; will pull all classes from the package.
import MyPackages.MyVehicle;

class Main
{
	public static void main(String[] args)
	{
		MyVehicle v = new MyVehicle();
		v.horn();
	}
}

