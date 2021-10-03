class car {
   public void honk() {
       System.out.println("tuk tuk!");
   } 
}
class inheritance extends car{
    public static void main(String[] args) {
        car maruti = new car();
        maruti.honk();
    }
}
