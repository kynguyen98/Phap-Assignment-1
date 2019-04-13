class circle{
    private float radius;
    circle (float radius){
        this.radius=radius;
    }
    double getradius(){
        return radius;
    }
    double getarea(){
        return Math.PI*radius*radius; 
    }
    double getperimeeter(){
        return 2*Math.PI*radius;
    }
    public void display(){
        System.out.println("Details of the circle: ");
        System.out.println("Here is the area: "+getarea());
        System.out.println("Here is the perimeter: "+getperimeeter());
    }
    public static void main(String[] args) {
        {
            circle c= new circle(34);
            c.display();
        }
    }
}