//Creating class BookGroup
public class BookGroup{
    public static void main(String[] args) {
        Author author = new Author("Herbert","Schildert");
        String value = author.toString();
        Book book = new Book("Object Oriented Programming\nSystems(OOPS)", value ,1000.0);
        System.out.println("......................................................................................");
        System.out.println("  TITLE" + "\t\t\t\t\t" + "     AUTHOR" + "\t\t\t\t" + "PRICE");        
        System.out.println("......................................................................................");
        System.out.println(book.getTitle() + "\t\t\t\t" + value + "\t\t\t" +  book.getPrice());
    }
}
//Creating a class for Book
class Book{
//Instance variables
    String Title,Author;
    Double Price;
//Creating a Constructor for Book
    Book(String title , String author, Double price){
        Title = title;
        Author = author;
        Price = price;
    }
// Creating Instance methods get(), set()
//Set method
    void setTitle(String title){
    Title = title;
}
    void setAuthor(String author){
    Author = author;
}
    void setPrice(Double price){
    Price = price;
}
//Get method
    String getTitle(){
    return Title;
}
    String getAuthor(){
    return Author;
}
    Double getPrice(){
    return Price;
}
public String toString(){
    return("The Details of the Book" + Title + "," + Author + "," + Price);
}
}
//Creating a class Author
class Author{
//Instance variables
    String firstName,lastName;
//Creating Constructor for Author
    Author(String fname, String lname){
    firstName = fname;
    lastName = lname;
}
// Creating Instance methods get(), set()
//Set method
    void setFirstName(String fname){
    firstName = fname;
}
    void setLastName(String lname){
    lastName = lname;
}
//Get method
    String getFirstName(){
    return firstName;
}
    String getLastName(){
    return lastName;
}
public String toString(){
    return(firstName + " " + lastName);
}
}