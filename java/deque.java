import java.util.ArrayDeque;

public class deque {
 public static void main(String args[])
 {
    ArrayDeque<Integer> dq = new ArrayDeque<>();
    dq.offer(2);
    dq.offerFirst(1);
    dq.offerLast(3);
    dq.offerLast(5);
    dq.offerLast(7);
   System.out.println("printing elements of deque");
    System.out.println(dq);
 
    // to get first one 
    System.out.println();
    System.out.println("first and last element of deque");
    System.out.println(dq.peek());
    System.out.println(dq.peekLast());

    System.out.println();
    dq.pollFirst();
    dq.pollLast();
    System.out.println("removing first and last element of this ");
    System.out.println("now checking how deque will look like");


  System.out.println(dq);
  
    

 }
}
