import java.util.*;;
public class array {
public static void main(String args[])
{
  Scanner sc = new Scanner(System.in);
    int marks[] = new int[3];
    marks[0] = 2;
    marks[1]  =3;
    marks[2] = 0;
    for(int i=0; i<3; i++)
    {
        System.out.println(marks[i]);
    }
  
  //      System.out.println();
  //    // more different ways to declare array 
     
     
     int mark[] = {2,3,4};
     for(int i=0; i<3; i++)
    {
        System.out.println(mark[i]);
    }

     int n = sc.nextInt();
     int dummy[] = new int[n];
     System.out.println();
    // in c++ by default garbage value in array
    // but not in java , by default 0 value is there
   

  //   //to take input for array
   for(int i=0; i<n; i++)
   {
    dummy[i] = sc.nextInt();
   }
   
    for(int i=0; i<n; i++)
    {   
      System.out.println(dummy[i]);
      break; // was just using break to see how it goes 
    }

  //  2d arrays
  int rows = sc.nextInt();
  int cols = sc.nextInt();
  int a[][] = new int[rows][cols];
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols; j++)
    {
      a[i][j] = sc.nextInt();
    }
  }
  System.out.println();
   for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols; j++)
    {
      System.out.print(a[i][j]+" ");
    }
    System.out.println();
  }

 // lets find a index where number exist;
 int k = sc.nextInt();
 
 for(int i=0; i<rows; i++)
 {
  int f=-1;
  int jj=-1;
  for(int j=0; j<cols; j++)
  {
    if(a[i][j] == k)
    {
       System.out.println(i+" "+j);
    }
  }
 }


}    
}
