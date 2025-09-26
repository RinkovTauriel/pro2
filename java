Бинарная куча (Min-Heap)
import java.util.PriorityQueue;

public class Main {
    public static void main(String[] args) {
        PriorityQueue<Integer> heap = new PriorityQueue<>();
        int[] data = {8, 3, 5, 1, 6, 2, 4, 7};
        for (int num : data) heap.offer(num);
        heap.offer(0);
        int minVal = heap.poll();
        System.out.println(minVal);
    }
}

Хеш-таблица
java
import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        HashMap<String, String> ht = new HashMap<>();
        ht.put("Alice", "January");
        System.out.println(ht.get("Alice"));
        ht.remove("Alice");
    }
}

