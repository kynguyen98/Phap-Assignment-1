class point3d{
    private double x,y,z;
    point3d (double x,double y,double z){
        this.x=x;
        this.y=y;
        this.z=z;
    }
    public double distancefromcenter(){
        return distancefrom(0,0,0);
    }
    public double distancefrom(point3d other){
        return Math.sqrt(Math.pow(x-other.x, 2)+
        Math.pow(y-other.y, 2)+Math.pow(z-other.z, 2));
    }
    public double distancefrom(double xval,double yval,double zval){
        return Math.sqrt(Math.pow(x-xval, 2)+
        Math.pow(y-yval, 2)+Math.pow(z-zval, 2));
    }
    public void display(){
        System.out.println("Here is the the cordinate");
        System.out.println("x: "+this.x);
        System.out.println("y: "+this.y);
        System.out.println("z: "+this.z);
    }
    public static void main(String[] args) {
        point3d p1,p2;
        p1 = new point3d(3,2,2);
        p2= new point3d(2,2,1);
        System.out.println("Distance from point 1 to center"+p1.distancefromcenter()); 
        System.out.println("Distance from point 1 to point 2"+p1.distancefrom(p2)); 
    }
}
