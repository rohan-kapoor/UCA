class Threads {
    static int count = 0;
    public static void main(String[] args) throws InterruptedException {
        // Thread t = new Thread(() -> System.out.println("hello Thread at exec."));
        // t.start();


        // Thread t = new Thread(() -> {
        //     for(int i = 0; i < 1000; i++) {
        //         count++;
        //     }
        // });
        // t.start();
        // t.join();
        // System.out.println(count);


        // Counter counter = new Counter();

        // for(int i = 0; i < 100000000; i++) {
        //     counter.increment();
        // }


        Counter counter = new Counter();
        Mythread[] threads = new Mythread[100];

        for(int i = 0; i < 100; i++) {
            threads[i] = new Mythread(counter);
            threads[i].start();
        }

        for(int i = 0; i < 100; i++) {
            threads[i].join();
        }

        System.out.println(counter.count);
    }
}