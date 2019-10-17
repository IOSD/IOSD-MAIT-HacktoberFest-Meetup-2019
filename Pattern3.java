package PATTERNS;

import java.util.Scanner;

public class Pattern3 

{
	public static void main(String[] args) 
	{
		
    Scanner sc = new Scanner(System.in);
    System.out.println("ENTER A NUMBER - ");
    int n = sc.nextInt();
    for(int i=1;i<=n;i++)
     {
    	 for(int j=1;j<=n-i+1;j++)
    	 {
    		  System.out.print("*  ");
    		  
    	 }
      System.out.println();
     }
    
	}
	

}
