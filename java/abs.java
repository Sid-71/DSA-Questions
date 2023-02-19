// an abstract function should have abstract class
// an abstract class have both abstract and non abstract methods


abstract class Car{
    public abstract void drive();
    public abstract void fly();
    public void playMusic()
    {
        System.out.println("this will have some functioning of music");
    }
}
// you will have to implement abstract funcitons of abstract base class

// but what if i am still not able to make fly funciton so 
// so i willm make this class as abstract;
 abstract class WagonR extends Car{
    public void drive()
    {
        System.out.println("some functioning of driving");
    }
}



// concrete class
// we can create object of concrete class
class updatedWagonR extends WagonR{

    public void fly() {
      System.out.println("some functioning in flying ");
    }

}

class abs{
    public static void main(String args[])
    {
        Car ob = new updatedWagonR();
        ob.drive();
        ob.playMusic();
        ob.fly();

    }
}

I am currently pursuing my bachelor's from 
srm university
talking about my techical skills, i am skilled 
in Data Structures and Algorithms.  have solved more than 
300 problems on leetcode and counting. I am 3 star rated at codechef
and i have solved more than 500 problems on codeforces.
talking about my interpersonal kills, I am good in communication skills
as good in working in a team.

I feel I am ready for software developer interviews. I just need a chance.