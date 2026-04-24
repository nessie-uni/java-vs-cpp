import java.util.ArrayList;

public class generics {

    public static void main(String[] args) {
        ArrayList<String> strings = new ArrayList<String>();
        
        // We can add values to the ArrayList...
        strings.add("Hello");
        strings.add("World");

        // But only of the declared type!
        strings.add(1); // Causes compilation to fail

        ArrayList<Integer> ints = new ArrayList<Integer>();
        ints.add(2187);
        ints.add(42);
        
        // Once again, only the declared type can be added.
        ints.add(93.2); // Causes compilation to fail
    }
}
