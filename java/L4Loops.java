import java.util.*;
public class L4Loops {
    public static void main(String[] args) {
    //   for(int counter =0; counter<11; counter++){
    //     System.out.println(counter);
    //   }  
    
    // int i=0;
    // while (i<10) {
    //     System.out.println(i);
    //     i++;
    // }
//   int i=0;
//   do {
//     System.out.println(i);
//     i=i+1;
//   } while (i>110);
Scanner sc = new Scanner(System.in);
 int n= sc.nextInt();
 int sum=0;
 for(int i=1; i<=n ; i++){
    sum = sum + i;
 }
 System.out.println(sum);
     }

    
}
