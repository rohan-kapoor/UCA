public class shapeIMP {
    public static void main(String[] args) {
        Shape circle = new Circle(5);
        System.out.println("Circle area: " + circle.area());
        System.out.println("Circle perimeter: " + circle.perimeter());
        System.out.println("Circle number of sides: " + circle.NOS());

        Shape triangle = new Triangle(3,4,5);
        System.out.println("Triangle area: " + triangle.area());
        System.out.println("Triangle perimeter: " + triangle.perimeter());
        System.out.println("Triangle number of sides: " + triangle.NOS());

        Shape quadrilateral = new Quadrilateral(4, 5, 4, 5);
        
    }
}