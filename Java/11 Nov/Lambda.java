import java.util.function.*;

class Lambda
{
    public static void main(String[] args)
    {
        // Supplier<Integer> randomGenerator = () -> {
        //     return (int)(Math.random() * 100d);
        // };

        // Function<String, Integer> getStringLength = (str) -> {
        //     return str.length();
        // };

        // Function<Integer, Double> getSqrt = (num) -> Math.sqrt(num);
        // System.out.println(getSqrt.apply(10));
        // System.out.println(getSqrt.apply(12));
        // System.out.println(getSqrt.apply(16));

        // Function<String, String> Uppercase = (str) -> str.toUpperCase();

        // System.out.println(Uppercase.apply("abc"));
        // System.out.println(Uppercase.apply("Dhc"));
        // System.out.println(Uppercase.apply("XCdd"));

        // Function<String, String> deleteExtraSpace = (str) -> {
        //     return str.trim();
        // };

        // System.out.println(deleteExtraSpace.apply("  abc "));
        // System.out.println(deleteExtraSpace.apply("abc  "));
        // System.out.println(deleteExtraSpace.apply("    abc  "));

        Function<Supplier<String>, Consumer<String>> supplierConsumerFunction = (supplier) -> {
            final String randomIdFromSupplier = supplier.get();
            Consumer<String> consumer = (randomIdFromConsumer) -> {
                for(int i = 0; i < 10; i++){
                    try {
                        Thread.sleep(2000);
                        System.out.println((i+1) + " " + randomIdFromConsumer + " " + randomIdFromSupplier);
                    } catch (Exception e) {
                        //
                    }
                }
            };
            return consumer;
        };

        supplierConsumerFunction.apply(() -> {
            return String.valueOf("randomID -- " + (Math.random() * 100) + " ");
        }).accept("Rohan");
    }
}