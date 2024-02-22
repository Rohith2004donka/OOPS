import java.util.Scanner;
public class student
{
    student()
    {
        System.out.println("default constructor called automatically");
    }
    String fullName;
    int rollNum;
    float semper;
    String collegeName;
    int collegeCode;
    
    public static void main(String args[])
    {
        student obj=new student();
        Scanner input= new Scanner(System.in);
        System.out.print("Enter fullname: ");
        obj.fullName= input.next(); 
        System.out.print("Enter your roll no: ");
        obj.rollNum=input.nextInt();
        System.out.print("enter your sem CGPA");
        obj.semper =input.nextFloat();
        System.out.print("Enter your college name: ");
        obj.collegeName=input.next();
        System.out.print("Enter your clg code: ");
        obj.collegeCode=input.nextInt();
    }
}
        

