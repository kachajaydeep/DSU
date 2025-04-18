public class Main{
    
    public void fullThrottle(){
        System.out.println("The Car is Going as Fast as it can!");
    }
    
    public void speed(int maxspeed){
        System.out.println("Max Speed is : "+ maxspeed);
    }
    
    public static void main(String[] args){
        Main mycar = new Main();
        mycar.fullThrottle();
        mycar.speed(236);
        
    }
}