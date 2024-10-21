class A {
    public int val;

    A(int def) {
        val = def;
    }
}

public class Super extends A{
    Super() {
        super(20);
    }
    public static void main(String[] args) {
        Super obj = new Super();
        System.out.println("value: " + obj.val);
    }
}
