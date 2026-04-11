package Recursion;

public class Ex7TOH {
    public static void towerOfHanoi(int n, String src, String helper, String dest){
      towerOfHanoi(n-1, src, dest, helper); 
      System.out.println();  
    }

    public static void main(String[] args) {
        int n=3;
        
    }
    
}
