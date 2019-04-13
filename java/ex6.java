import java.util.Scanner;
class account{
    private String name;
    private double balance;
    private long id;
    account (String name,double balance,long id){
        this.name=name;
        this.balance=balance;
        this.id=id;
    }
    public double deposit(double x){
        return this.balance=this.balance+x;
    }
    public double withdraw (double x){
        return this.balance=balance-x;
    }
    
    public void ui(){
        int i;
        double x;
        display();
        System.out.println("Do you wish to di the following action: ");
        Scanner in=new Scanner(System.in);
        System.out.println("1. Deposit\n2. Withdraw\n");
        i=in.nextInt();
        switch (i){
            case 1: System.out.println("You entered "+i);
            System.out.println("Please enter a specific amount");
            x=in.nextDouble();deposit(x);break;
            case 2: System.out.println("You entered "+i);
            System.out.println("Please enter a specific amount");
            x=in.nextDouble();withdraw(x);break;
        }
        
    }
    public void display (){
        System.out.println("Account information:");
        System.out.println("Name: "+name);
        System.out.println("Id: "+id);
        System.out.println("Balance: "+balance);
    }
    public static void main(String[] args) {
        account a=new account("Ky", 400000,123160056)
;
        a.display();
        a.ui();
        System.out.print("\033\143");//clear console works fine in Linux environment
        a.display();
  }
}