class Triangle implements Shape {
    private double side1;
    private double side2;
    private double side3;
    
    public Triangle(double A, double B, double C) {
        this.side1 = A;
        this.side2 = B;
        this.side3 = C;
    }
    
    public double area() {
        double s = perimeter() / 2;
        return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    
    public double perimeter() {
        return side1 + side2 + side3;
    }
    
    public int NOS() {
        return 3;
    } 
}