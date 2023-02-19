class pattern{
    public static void main(String args[])
    {
        // hollow rectangle
        int n = 4;
        int m = 5;

          
         for(int i=1; i<=n; i++)
         {
            for(int j=1; j<=m; j++)
            {
               System.out.print("*");
            }
            System.out.println();
         }


        for(int i=1; i<=n; i++)
        {
            System.out.print("*");
            if(i == 1 || i == n)
            {
                for(int j=2; j<=m-1; j++)
                {
                    System.out.print("*");
                }    
            }else {
                for(int j=2; j<=m-1; j++)
                {
                    System.out.print(" ");
                } 
            }
              System.out.print("*");
           System.out.println();
        }
    }
}