/*
 * You need a program to manage admissions for an art school. Pupils can be
 * admitted to the school if they are over 6 years of age.
 * You're given a program which declares a Pupil class.
 * 
 * Complete the setAge method of the Pupil class. If the value of parameter
 * a is over 6, assign it to age attribute and output "Welcome".
 * Output "Sorry" otherwise.
 */

import java.util.Scanner;

class Main
{
	public static void main(String[] args)
	{
		Scanner	read = new Scanner(System.in);
		int		a = read.nextInt();
		Pupil	pupil = new Pupil();

		pupil.setAge(a);
		pupil.ageIsAcceptable();
	}
}

class Pupil{
	private int age;

	//complete setter method
	public void setAge(int a)
	{
		this.age = a;
	}

	public int getAge()
	{
		return this.age;
	}

	public void ageIsAcceptable()
	{
		if (this.age > 6)
			System.out.println("Welcome");
		else
			System.out.println("Sorry");
	}
}
