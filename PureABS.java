interface Shape
{
    float area();
    void dimensions();
}

class Rectangle implements Shape
{
    float a,b;
    Rectangle(float base,float height)
    {
        a=base;
        b=height;
    }
    public float area()
    {
        return a*b;
    }
    public void dimensions()
    {
        System.out.println("Dimensions : "+a+" X "+b);
    }
}

class Triangle implements Shape
{
    float a,b;
    Triangle(float base,float height)
    {
        a=base;
        b=height;
    }
    public float area()
    {
        return (float)0.50*a*b;
    }
    public void dimensions()
    {
        System.out.println("Dimensions : "+a+" X "+b);
    }
}
public class PureAbstraction 
{
    public static void main(String[] args) 
    {
        Rectangle obj=new Rectangle(23,45);
        Triangle obj1=new Triangle(67,89);
        System.out.println("Area of Rectangle : "+obj.area());obj.dimensions();
        System.out.println("Area of Triangle : "+obj1.area());obj1.dimensions();
    }
}
