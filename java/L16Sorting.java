import java.util.*;

class Sorting{
    public static void printArray(int arr[]){
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
public class L16Sorting {
    public static void main(String[] args) {
       int arr[]= {9,5,7,5,2,1,3} ;
        //bouble sort
        for(int i=0; i<arr.length; i++){
           for(int j=0; j<arr.length-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
             }
           } 
        }

        //selection sort
        for(int i=0; i<arr.length-1; i++){
            int smallest = i;
            for(int j=i+1; j<arr.length; j++){
                if(arr[smallest] > arr[j]){
                    smallest = j;
                }
            }
            int temp = arr [smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }
       // printArray(arr);
    }
}
