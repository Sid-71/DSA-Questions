class Shape {
    public void area() {
        System.out.println("display area");
    }
}

// single level inheritence
class Triangle extends Shape {
    public void area(int l, int h) {
        System.out.println((l * h) / 2);
    }
}
// multilevel
class EquilateralTriangle extends Triangle {
    public void area(int l, int h) {
        System.out.println((l * h) / 2);
    }
}


//heirarchial inheritence . two child class inherit from same base class
class Circle extends Shape{
    public void area(int r)
    {
     double area = (3.14)*r*r;
     System.out.println(area);

    }
}

// hybrid inherient = combination of previoys inheritence



public class inheritence {
    public static void main(String args[]) {

    }
}
