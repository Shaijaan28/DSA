package OOPS;

public class Ex1StudentClass {
    // creating a new data type 
    public static class Student {
        String name;
        private int rno;
        double percent;    
    }
    public static void chnage(Student s){
        s.name = "Rohan";
    }

    public static void main(String[] args) {
  
     Student s1 = new Student();   
     s1.name = "raghaw";
     s1.rno = 76;
    }
    
}
