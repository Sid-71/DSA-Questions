// java has garbage collector , it will automatically remove unused variables
// no need of destructor in java becuase of garbage collector

// polymorphism - compile time , run time 
// funciton overloading and funciton overriding
// function overloading -- same name differnt work

class Pen {
    String color;
    String type;

    public void write() {
        System.out.println("writting");
    }
}

class Student {
    String name;
    int age;

    Student() {

    }
//    constructor 
    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
 // same name but differnt working 
    public void printInfo(int age) {
        System.out.println(age);
    }
    public void printInfo(String name) {
        System.out.println(name);
    }
    public void printInfo(String name,int age) {
        System.out.println(name+" "+age);
    }

}

public class oops {
    public static void main(String args[]) {
        System.out.println("a");
        Pen p1 = new Pen();
        p1.write();
        Pen p2 = new Pen();
        p2.color = "Red";
        System.out.println(p2.color);
       Student s1 = new Student("sidharth",20);
       s1.printInfo(s1.name);

    }
}