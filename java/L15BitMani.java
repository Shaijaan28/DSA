public class L15BitMani {
    public static void main(String[] args) {
        // <<GET BIT>>
        // int n=5;
        // int pos =2;
        // int bitMask = 1<<pos;

        // if((bitMask & n)==0){
        //   System.out.println("bit was zero");  
        // } else{
        //     System.out.println("bit was one");
        // }


        //<<SET BIT>>
        // int n=5;
        // int pos =1;
        // int bitMask = 1<<pos;
        // int newNumber = bitMask | n;
        // System.out.println(newNumber);


       //<<CLEAN BIT>>
        int n=5;
        int pos =1;
        int bitMask = 1<<pos;
        int notBitMask =~(bitMask);

        int newNumber = notBitMask &n;
        System.out.println(newNumber);
    }
    
}
