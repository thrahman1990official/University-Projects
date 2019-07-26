package lab3_data_struct;

public class HeapInt 
{
	private int [] heap ;
	int n=0;
	// Heap constructor
	public HeapInt ( int [] a)
	{
	n = a. length ;
	for (int k = n /2; k >= 1; k --)
	sink (a, k,n);
	heap =a;
	}
	public int removeMax ()
	{
	// your code goes here
	}


}
