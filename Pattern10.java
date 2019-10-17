package PATTERNS;

import java.util.Scanner;

public class Pattern10 
{

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
	    System.out.println("ENTER A NUMBER - ");
	    int n = sc.nextInt();
	    int rows=2*n-1;
	    for(int i=1;i<=rows;i++)
	     {
	    	if(i<=n)
	    	{	
	    	 for(int j=n-i;j>=1;j--)
	    	 {
	    		  System.out.print("    ");
	    		  
	    	 }
	    	 for(int k=1;k<=i;k++)
	    	 {
	    		 System.out.print("*   ");
	    	 } 
	    	}
	    	else
	    	{
	    		for(int l=1;l<=i-n;l++)
	    		{
	    			 System.out.print("    ");
	    			 
	    		}
	    		for(int m=1;m<=rows-i+1;m++)
	    		{
	    			System.out.print("*   ");
	    		}
	    	}
	      System.out.println();
	     }
	}

}
