class student{
    private String name;
    private long id;
    private double m,e,chm,phys;
    student (String name,long id,double m,double e,double chm,double phys){
        this.name=name;
        this.id=id;
        this.m=m;
        this.e=e;
        this.chm=chm;
        this.phys=phys;
    }
    public double average(){
        return (m+e+chm+phys)/4;
    }
    public void comparision(double x){
        if (x>=85&&x<=100) System.out.println("Excellent grade");
        else if (x<=84&&x>=70) System.out.println("Fine grade");
        else System.out.println("Student grade sucks");
    }
    public void display(){
        System.out.println("name: "+name);
        System.out.println("Id: "+id);
        System.out.println("Average: "+average());
        double x=average();
        comparision(x);
    }   
    public static void main(String[] args) {
        student s= new student("Ky", 123160056, 77, 94, 50, 80);
        s.display();
    }
}