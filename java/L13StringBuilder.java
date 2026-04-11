public class L13StringBuilder {
    public static void main(String[] args) {
    //  StringBuilder sb = new StringBuilder("tonny");
      //System.out.println(sb); 
      //char at index 0
     // System.out.println(sb.charAt(0));

      //set char at index 0
    //  sb.setCharAt(0, 'p');
    //  System.out.println(sb);

      //insert a cahr
   //   sb.insert(0,'s' );
   //   System.out.println(sb);

      //delet a char
   //   sb.delete(2, 3);
   //   System.out.println(sb);

//    StringBuilder sb = new StringBuilder("h");
//    sb.append("e");
//    sb.append("l");
//    sb.append("l");
//    sb.append("o");
//    System.out.println(sb);

   //reverse a chara
   StringBuilder sb = new StringBuilder("shaijaan");

   for(int i=0; i<sb.length()/2; i++){
    int front = i;
    int back = sb.length()-1-i;//5-1-1 = 4

    char frontChar = sb.charAt(front);
    char backChar = sb.charAt(back);

    sb.setCharAt(front, backChar);
    sb.setCharAt(back, frontChar);

   }
   System.out.println(sb);

   
    }  
}
