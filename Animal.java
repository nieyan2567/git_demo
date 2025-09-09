import lombok.Data;
import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
@Data
public class Animal {
    private String name;
    private int age;
    public static int count;

    public Animal() {

    }

    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public static void printCount() {
        System.out.println("Total animals: " + count);
    }
}
