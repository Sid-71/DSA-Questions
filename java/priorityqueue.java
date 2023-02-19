import java.util.*;

class priorityqueue {
    public static void main(String args[])
    {
        // by defualt min heap but in c++ by default max heap
        PriorityQueue<Integer>pq =new  PriorityQueue<>();
        pq.offer(12);
        pq.offer(23);
        pq.offer(1);
        System.out.println(pq);
        pq.poll();
        System.out.println(pq);
        System.out.println(pq.peek());

        System.out.println();
        System.out.println("max heap");
        PriorityQueue<Integer>pq2 =new  PriorityQueue<>(Collections.reverseOrder());
        pq2.offer(52);
        pq2.offer(223);
        pq2.offer(1222);
        System.out.println(pq2);
        pq2.poll();
        System.out.println(pq2);
    }
}