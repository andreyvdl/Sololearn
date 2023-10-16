/*
 * A static variable or mehtod is part of the class, not that instance of the
 * object, but still can be used by all objects and can be used as the class.
 */

class Main
{
	public static void main(String[] args)
	{
		Counter c1 = new Counter();
		Counter c2 = new Counter();
		Counter c3 = new Counter();

		System.out.println(Counter.COUNT);
		System.out.println(c1.COUNT);
		Counter.getCOUNT();
	}
}

class Counter
{
	public static int COUNT = 0;

	Counter()
	{
		COUNT++;
	}
	public static void getCOUNT()
	{
		System.out.println(COUNT);
	}
}
