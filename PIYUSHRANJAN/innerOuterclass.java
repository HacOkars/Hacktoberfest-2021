class outer{
    public class inner{
        int x =5;

    }
}

public class innerOuterclass {

    public static void main(String[] args) {
        outer baharWala = new outer();
        outer.inner andarWala = baharWala.new inner();
        System.out.println(andarWala.x);
    }
}