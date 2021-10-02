// abstract class
abstract class Person {
    public String fname = "John";
    public int age = 24;
    public abstract void study(); // abstract method
  }
  
  // Subclass (inherit from Person)
  class Student extends Person {
    public int graduationYear = 2018;
    public void study() { // the body of the abstract method is provided here
      System.out.println("Studying all day long");
    }
  }
  class abstractClass {
    public static void main(String[] args) {
      // create an object of the Student class (which inherits attributes and methods from Person)
      Student myObj = new Student();
  
      System.out.println("Name: " + myObj.fname);
      System.out.println("Age: " + myObj.age);
      System.out.println("Graduation Year: " + myObj.graduationYear);
      myObj.study(); // call abstract method
    }
  }