import java.io.*;

class Fibbonacci{
	public static void main(String args[]){
		int a, b, c=0, num;
		num = Integer.parseInt(args[0]); //Taking input from command line storing to num
		a = 0;
		b = 1;  //Initializing the start of Series
		System.out.print(a + " ");
		System.out.print(b + " ");    //Printing the first two element, don't print for nth term
		for(int i=0; i<num-2; i++){   //num-2 because two elements have been printed already
		   c = a+b;  
		   a = b;
		   b = c;
		   System.out.print(c + " ");  //Don't Print for Nth term
		}
		System.out.println("Nth term is: " +c);
	}
}
