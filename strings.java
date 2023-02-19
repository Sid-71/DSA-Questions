import java.util.*;
class strings {
    public static void main(String args[])
    {
       String name = "Sidharth";
       System.out.println(name);

        // for taking inputs
        Scanner sc = new Scanner(System.in);
        String name2 = sc.nextLine(); // for taking full line
        System.out.println(name2);
    
        
        // for concatentioan s1 + s2;
        
        
        for(int i=0; i<name2.length(); i++)
        {
        char ch =  name2.charAt(i);
        System.out.print(ch);
        }

        // compare
        
        String s1 = "hi",s2 = "lo";
      if(s1.compareTo(s2) == 0)
      {
        System.out.println("yes they are equal");        
      }
      else {
        System.out.println("yups they are not equal");
      }
  

      // for selecting susbsrting

      String s3 = "hackveda";
      String s4 = s3.substring(0,2);
      String s42 = s3.substring(2);
        System.out.println(s3 + " "+s4 +" "+ s42);

     
        //strings are immutable 


        

         
        
    }
}
