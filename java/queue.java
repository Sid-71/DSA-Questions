import java.util.LinkedList;
import java.util.Queue;

import javax.print.attribute.PrintRequestAttribute;

public class queue {
    
     public static void main(String args[])
     {
        Queue<Integer>q = new LinkedList<>();
        q.offer(2);
        q.offer(3);
        q.offer(5);
        q.offer(6);
 System.out.println("printing element after removing");        
        System.out.println(q);
        q.poll();
        System.out.println(q);
       System.out.println("front element of it");
        System.out.println(q.peek());
       System.out.println("now lets see how the queue looks like");
       System.out.println(q);  
        
    
     }
    }
       

