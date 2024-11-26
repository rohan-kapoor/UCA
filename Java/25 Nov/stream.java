import java.util.*;
import java.util.stream.*;

class stream {
    public static void main(String[] args) {
        List<String> names = Arrays.asList("Alice", null, "Bob", null, "Charlie", "David", "Ash", "Charlie", "David", "Ash");

        //Filter the names starting wuth letter 'A'

    //     List<String> filtered = names.stream()
    //         .filter((name) -> name.charAt(0) == 'A')
    //         .collect(Collectors.toList());

    // System.out.println(filtered);

    //uppercase all the names.
    // List<String> upperCaseNames = names.stream()
    //     // .filter((name) -> name != null)
    //     // .map((name) -> name.toUpperCase())
    //     .filter(Objects::nonNull)
    //     .map(String::toUpperCase)
    //     .collect(Collectors.toList());
        
    // System.out.println(upperCaseNames);
    
    //Combine all the names

    // String CombinedName = names.stream()
    //     .filter((name) -> name != null)
    //     .reduce("Combined Name : ", (a, b) -> a + b);
    
    // System.out.println(CombinedName);

    // List <Integer> numbers = Arrays.asList(1,2,3,4,5,6,7,8,9,10);
    // //Add using streams

    // Integer sum = numbers.stream()
    //     // .reduce(0, (a,b) -> a + b);
    //     .reduce(0, Integer::sum);

    // // Collectors.sort(numbers,() -> {});

    // System.out.println(sum);

    //Grouping Character -> List<String>
    //Map <Key, Val>

        // System.out.println(names.stream()
        // .filter((name) -> name != null)
        // .collect(Collectors.groupingBy(name -> name.charAt(0))));        
        //output : {A=[Alice, Ash], B=[Bob], C=[Charlie], D=[David]}

        // Map<String, Long> countMap = names.stream()
        //     .filter((name) -> name != null)
        //     .collect(Collectors.groupingBy(name -> name, Collectors.counting()));
        //output : {Bob=1, Alice=1, Ash=2, Charlie=2, David=2}
    
        // counting returns Long (not Integer)
        // System.out.println(countMap);


        //Group the names byt the length
        // Map<Integer,List<String>> length = names.stream()
        //     .filter((name) -> name != null)
        //     .collect(Collectors.groupingBy((name)->name.length()));
        //output : {3=[Bob, Ash, Ash], 5=[Alice, David, David], 7=[Charlie, Charlie]}
        // System.out.println(length);
    }

}