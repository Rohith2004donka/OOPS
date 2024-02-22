import java.util.Scanner;
public class studentconst
{
    String collegeName = "MVGR";
    int collegeCode=33;
    studentconst()
    {
        System.out.println("default constructor called automatically");
        System.out.println("college name: "+collegeName);
        System.out.println("college code: "+collegeCode);
    }
    studentconst(String fullName, double semPerentage)
    {
        System.out.println("Name of the student: "+fullName);
        System.out.println("Sem CGPA of student: "+semPerentage);
    }
    public static void main(String args[])
    {
        studentconst obj=new studentconst();
        studentconst obj2=new studentconst("Rohith",10.0);
    
    }
}
