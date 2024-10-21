import java.util.*;

public class Inheritence2 {
    public static void main(String[] args) {
        List<Integer> array = new ArrayList<>();
        List<Integer> linkedList = new LinkedList<>();

        array.add(1);
        array.add(2);
        array.add(3);

        linkedList.add(1);
        linkedList.add(2);
        linkedList.add(3);

        System.out.println("ArrayList: " + array);
        System.out.println("LinkedList: " + linkedList);
    }
}
