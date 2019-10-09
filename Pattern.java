
import java.util.Scanner;
import java.util.Scanner;
public class Pattern

{

	public static void main(String[] args)
	{
		 Scanner sc = new Scanner (System.in);
         System.out.println(" ENTER A NO.");
        int n = sc.nextInt();
       
      
    	for(int i=2;i<=n;i++)
    	{
    		 for(int j=1;j<=n-i;j++)
    		 {
    			 System.out.print("  ");
    			 

    		 }
    		 System.out.print("* ");
    		 
    		 for(int j=1;j<=i-2;j++)
    		 
    		 {
    			 System.out.print("  ");
    		 }
    		 
    		 System.out.print("* ");
    		 System.out.println();
    	
    	}
    		 
    		 if(n>1)
    		 {
    			 for(int k=1;k<=n;k++)
    		     System.out.print("* ");
    		 }	 		 
        

	}   
        
}
