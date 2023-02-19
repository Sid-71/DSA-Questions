import java.util.*;
public class stack {
    public static void main(String args[])
    {
     Stack<String> animals = new Stack<>();
      animals.push("snake");
      animals.push("dragon");
      animals.push("wolf");
      animals.push("vampires");

      System.out.println("lets see the top most element of stack");

      System.out.println(animals);
      System.out.println(animals.peek());

      animals.pop();
      System.out.println("lets see we remove one element");
      System.out.println(animals);
    
    System.out.println();
    System.out.println();
    System.out.println("iterating over it one bye one and removing them");
    while(animals.size()>0)
    {
        System.out.println(animals.peek());
        animals.pop();
    }

    }
}
