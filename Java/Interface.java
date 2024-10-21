interface calculator {
    public int add(int a, int b);
    public int sub(int a, int b);
}

class Interface implements calculator {
    public int add(int a, int b) {
        return a + b;
    }
    public int sub(int a, int b) {
        return a - b;
    }
    
    public static void main(String[] args) {
        // system.out.println("Hello World");
    }
}