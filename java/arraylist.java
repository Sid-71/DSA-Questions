import java.util.*;
public class arraylist {
    public static void main(String args[])
    {
     ArrayList<Integer> list = new ArrayList<Integer>();
     list.add(10);
     list.add(12);
     list.add(13);
     System.out.println(list);
     System.out.println("getting an element");
     int element = list.get(0);
     System.out.println(element);
     System.out.println("adding an element");

     list.add(1,11);
     System.out.println(list);
     System.out.println("removing an element");

     list.remove(0);
     System.out.println(list);
     System.out.println("sorting an element");
     list.add(0,45);
     System.out.println(list);
      Collections.sort(list);
      System.out.println(list);

    }
}
