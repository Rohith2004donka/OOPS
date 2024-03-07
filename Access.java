public class Access{
    private
        int privar;
    protected
        int provar;
    public  
        int pubvar;
        void setVar(int priValue,int proValue, int pubValue)
        {
            privar = priValue;
            provar = proValue;System.out.println("privar:"+privar);
            pubvar = pubValue; 
            System.out.println("values are seted successfully");
        }
        void getVar()
        {
            System.out.println("private var:"+privar);
            System.out.println("protected var:"+provar);
            System.out.println("public var:"+pubvar);    
        }
        public static void main(String args[])
        {
            Access obj = new Access();
            obj.setVar(23,34,56);
            obj.getVar();
        }

}
