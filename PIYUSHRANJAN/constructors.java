class vehicle{
    int wheels;
    vehicle(int noOfWheels){
        wheels=noOfWheels; 

        // System.out.println("this car has "+wheels+" wheels");
    }
}
public class constructors {

    constructors(){
        System.out.println("hello ji");
    }
    public static void main(String[] args) {
        constructors jojo = new constructors();
    
        vehicle maruti = new vehicle(10);
        // maruti.wheels=8;
        System.out.println(maruti.wheels);
        
    }
}
