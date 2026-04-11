import java.util.*;
public class L5Patterns {
      public static void main(String[] args) {

        
          Scanner sc = new Scanner(System.in);
          int n = sc.nextInt();
         // int m = sc.nextInt();
     // 1 reactangle
    //   for(int i = 1;i<=n; i++ ){
    //     for(int j = 1 ; j<=m; j ++){
    //       System.out.print(" * ");  
    //     }
    //     System.out.println(); 
    //   }  

    // 2 rectangle outer border

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //       //cell -->(i,j)  
    //       if(i==1 || j==1 || i==n || j==m ){
    //         System.out.print("*");
    //       } else{
    //         System.out.print(" ");
    //       }
    //     }
    //     System.out.println();
    // }

    // 3  traingle
    // for(int i=1;i<=n ;i++){
    //     for(int j=1; j<=i ; j++){
    //         System.out.print("*");
    //     }
    //     System.out.println();
    // }

    // 4 reverse traingle
    // for(int i = n;i<=1; i-- ){
    //     for(int j=1; j<=i; j++){
    //         System.out.print("*");
    //     }
    //     System.out.println();
    // }

    //5 Rotate triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            System.out.print(" ");

        }
        for(int j=1; j<=i; j++){
            System.out.print("*");
        }
        System.out.println();
    }



    }
    
}
