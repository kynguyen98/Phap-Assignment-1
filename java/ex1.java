class rectangle{ 
    private double w,h;
    public rectangle (double w,double h){
        this.w=w;
        this.h=h;
    }
    public double getw(){
        return w;
    }
    public double geth(){
        return h;
    }
    public double area(){
        return w*h;
    }
    public void display(){
        System.out.println("Area is: "+area());
    }
    public static void main(String[] args) {
        rectangle r=new rectangle(3,14);
        r.display();
    }
}