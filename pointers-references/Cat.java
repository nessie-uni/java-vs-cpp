
public class Cat {

    public Cat(String name) {
        super();
        this.name = name;
    }
    String name;

    public static void passByValue(Cat c) {
        System.out.println("c name (before): " + c.name);
        c = new Cat("Nermal");
        System.out.println("c name (after): " + c.name);
    }

    public static void actOnValue(Cat c2) {
        System.out.println("c2 name (before): " + c2.name);
        c2.name = "Tom";
        System.out.println("c2 name (after): " + c2.name);
    }

    public static void main(String[] args) {
        Cat cat1 = new Cat("Garfield");

        System.out.println("Cat 1 name (before): " + cat1.name);
        passByValue(cat1);
        System.out.println("Cat 1 name (after): " + cat1.name);

        Cat cat2 = new Cat("Socks");

        System.out.println("Cat 2 name (before): " + cat2.name);
        actOnValue(cat2);
        System.out.println("Cat 2 name (after): " + cat2.name);
    }

}
