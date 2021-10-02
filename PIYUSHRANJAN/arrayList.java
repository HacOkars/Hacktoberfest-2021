import java.util.ArrayList;
import java.util.Collections;
public class arrayList {
  public static void main(String[] args) {
    ArrayList <String> cars = new ArrayList<>();
    cars.add("Volvo");
    cars.add("BMW");
    cars.add("Ford");
    cars.add("Mazda");
    // System.out.println(cars);
    // System.out.println(cars.get(1));
    // cars.remove(0);
    // System.out.println(cars);
    cars.set(0, "Mercedes");
    System.out.println(cars);
    // for (int i = 0; i < cars.size(); i++) {
    //   System.out.println(cars.get(i));
      
    // }
// COLLECTION INCLUDE SORT OR IMPORT COLLECTIONS AND SORT() USED TO SORTING THE ELEMENTS  IN ALPHABETICALLY AND NUMERICAL ORDER.

    Collections.sort(cars);
    System.out.println(cars);
  }
}