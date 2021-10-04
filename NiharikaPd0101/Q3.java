public class Main {
    public static void main(String[] args) {

        int[] ary = {5, 63, 34, 24, 42, 25};

        System.out.println(sf(ary, 0));
        System.out.println(sf(ary, 1));
        System.out.println(sf(ary, 2));
    }

    public static int sf(int[] ccd, int si){
        int indexOf = si;
        int smt = ccd[si];
        for(int i = si; i < ccd.length; i++){
            if(smt > ccd[i]){
               smt = ccd[i];
               indexOf = i;
            }
        }
            return indexOf;
    }   
