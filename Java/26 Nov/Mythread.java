public class Mythread extends Thread{
    public Counter counter;
    public int times = 0;

    Mythread(Counter counter) {
        this.counter = counter;
        this.times = 10000000;
    }

    public void run() {
        System.out.println("Thread :" + Thread.currentThread().getName() + " is starting");

        for(int i = 0; i < times; i++) {
            counter.increment();
        }
        
        System.out.println("Thread :" + Thread.currentThread().getName() + " is completed");
    }
}
