import java.util.Scanner;
class one
{
    int a, b;
    public one(int fir, int sec) 
    {   
        a=fir;
        b=sec;
    }
    public void display1() 
    {
        int c;
        c=a+b;
        System. out. println("The additon of two numbers is "+c) ;
    }
    public void display2() 
    {
        int d;
        d=a-b;
        System. out. println("The subtraction of two numbers is "+d);
    }
    public void display3() 
    {
        int e;
        e=a*b;
        System. out. println("The multiplication of two numbers is "+e) ;
    }
    public void display4() 
    {
        int f;
        f=a/b;
        System. out. println("The division of two numbers is "+f) ;
    }
    public void display5() 
    {
        int g;
        g=(a+b)/2;
        System. out. println("The average of two numbers is "+g) ;
    }
}

class Prog5
{
    public static void main(String [] args)
    {
        Scanner input=new Scanner(System.in);
        System.out.print("Enter the first number-");
        int a= input.nextInt();
        System.out.print("Enter the second number-");
        int b= input.nextInt();
        one o1;
        o1= new one(a,b);
        System.out.println("Press 1 for addition");
        System.out.println("Press 2 for subtraction");
        System.out.println("Press 3 for multiplication");
        System.out.println("Press 4 for division");
        System.out.println("Enter 5 for average");
        System.out.print("Enter your choice-");
        int choice= input.nextInt();
        switch(choice)
          {
            case 1:
            o1.display1();
            break;
            case 2:
            o1.display2();
            break;
            case 3:
            o1.display3();
            break;
            case 4:
            o1.display4();
            break;
            case 5: 
            o1.display5();
            break;
        }
    }
}