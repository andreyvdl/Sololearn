/*
 * The program you are given declares LinkedList "words".
 * Write a program to take words as input and add them to LinkedList until
 * its size isn't equal to 5, then output only those words whose length is
 * more than 4 characters.
 */

import java.util.LinkedList;
import java.util.Scanner;

class Main
{
	public static void main(String[ ] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		
		LinkedList<String> words = new LinkedList<String>();
		
		
		while(words.size() < 5)
		{
			String word = scanner.nextLine();
			//add the word to LinkedList
			words.add(word);
		}
		
		//your code goes here
		for (int i = 0; words.size() > i; i++)
		{
			if (words.get(i).length() <= 4)
				continue ;
			System.out.println(words.get(i));
		}
	}
}
