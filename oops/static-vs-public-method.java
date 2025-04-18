public class Main{
     static void publicMyMethod(){
         System.out.println("This is a Static Method Which is access without creating an object");
     }
     
     public void staticMyMethod(){
         System.out.println("This is a public Method Which only Print using Creating an Object");
     }
     
     public static void main(String[] args){
         publicMyMethod();
         Main myObj2 = new Main();
         myObj2.staticMyMethod();
     }
    
}