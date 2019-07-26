package lab3_data_struct;

import java.util.Scanner;
//Java program for checking brackets

public class CheckBrackets 
{ 
	static class stack 
	{ 
		int top=-1; 
		char items[] = new char[100]; 

		void push(char x) 
		{ 
			if (top == 99) 
			{ 
				System.out.println("Stack full"); 
			} 
			else
			{ 
				items[++top] = x; 
			} 
		} 

		char pop() 
		{ 
			if (top == -1) 
			{ 
				System.out.println("Underflow error"); 
				return '\0'; 
			} 
			else
			{ 
				char element = items[top]; 
				top--; 
				return element; 
			} 
		} 

		boolean isEmpty() 
		{ 
			return (top == -1) ? true : false; 
		} 
	} 
	
	/* If character1 and character2 are matching left and right brackets then return true*/
	static boolean areBracketsMatching(char character1, char character2) 
	{ 
	if (character1 == '(' && character2 == ')') 
		return true; 
	else if (character1 == '{' && character2 == '}') 
		return true; 
	else if (character1 == '[' && character2 == ']') 
		return true; 
	else
		return false; 
	} 
	
	/* If expression is balanced then return true */
	static boolean areBracketsBalanced(String exp) 
	{ 
	/* Declaring empty character stack */
	stack st=new stack(); 
	
	/*check matching parenthesis throughout the string*/
	for(int i=0;i<exp.length();i++) 
	{ 
		/*if characters are Alphabets then it is invalid*/
		if (Character.isAlphabetic(exp.charAt(i)))
		{
			System.out.println("Error: Invalid Characters");
			return false;
		}
		/*If exp.charAt(i) is starting parenthesis then push it*/
		if (exp.charAt(i) == '{' || exp.charAt(i) == '(' || exp.charAt(i) == '[') 
			st.push(exp.charAt(i)); 
	
		/*If exp.charAt(i) is ending parenthesis then populate from stack and check if the populated pair is matching*/
		if (exp.charAt(i) == '}' || exp.charAt(i) == ')' || exp.charAt(i) == ']') 
		{ 
				
			/* For ending parenthesis without a pair, it is not balanced*/
			if (st.isEmpty()) 
			{ 
				return false; 
			} 
	
			/* Populate top element from stack, It's not balanced if it's not a pair parenthesis */
			else if ( !areBracketsMatching(st.pop(), exp.charAt(i)) ) 
			{ 
				return false; 
			} 
		} 
			
	} 
		
	/* If something is found to be empty in the equation than return true */
		
	if (st.isEmpty()) 
		return true; /*balanced*/
	else
		{ /*not balanced*/
			return false; 
		} 
	} 
	
	public static void main(String[] args) 
	{ 
		Scanner scan = new Scanner(System.in);
		String exp = scan.next();
		if (areBracketsBalanced(exp)) 
			System.out.println("Balanced "); 
		else
			System.out.println("Not Balanced "); 
	} 

} 
//It takes more effort to check if the equation is balance
//It is O[n], the # of delimeters we check is fixed