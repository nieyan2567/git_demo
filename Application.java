public class Application {
    public static void main(String[] args) {
        Animal dog = new Animal("Buddy", 3);
        Animal cat = new Animal();

        cat.setName("Whiskers");
        cat.equals(dog);

        Animal.count = 2;
        Animal.printCount();

        System.out.println(dog);
        System.out.println(cat);
    }
}
