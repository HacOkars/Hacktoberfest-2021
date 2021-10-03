abstract class Animal{
    public abstract void animalSound();
      // Abstract method (does not have a body)
    public void sleep(){
        System.out.println("Sleeping!");
    }
}
// we cannot direct access abstract class so we have to use polymorphism
class cat extends Animal{
    public void animalSound(){
        System.out.println("The cat says meow!");
    }

}
public class abstraction {
    public static void main(String[] args) {
        cat abHua = new cat();
        abHua.animalSound();
        abHua.sleep();
    }
    
}