class cube {
    private double size;
    cube (double size){
        this.size=size;
    }
     double getsize(){
        return size;
    }
    double volume(){
        return size*size*size;
    }
    void detail(){
        System.out.println("Details of rectangle: ");
        System.out.println("width: "+size);
        System.out.println("heigh: "+size);
        System.out.println("length: "+size);
        System.out.println("Volume: "+volume());     
    }
    public static void main(String[] args) {
        cube c1,c2,c3;
        c1 = new cube(1);
        c2= new cube(2);
        c3= new cube(3);
        c1.detail();
        c2.detail();
        c3.detail();
    }
}