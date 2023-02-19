// by defulat functions declared in interface are abstract
// inside interface we can create only static , final , not dyynamic 
// means if eyes are 2 then all which implements it will have eyes =2 not anything else 
// we cannot create non abstract methods or have an implementation of non abstract method


// we can do mulitiple inheritence in interface , but not in classes
interface Animal{
    int eyes = 2;
    void walk();
}
interface Herbivore{

}
class Horse implements Animal,Herbivore {

    public void walk() {
        System.out.println("walk on 4 legs");
        
    }
    
}

class Interfaces{
    public static void main(String args[]) {
        
        Horse horse1 = new Horse();
        horse1.walk();
    }
}