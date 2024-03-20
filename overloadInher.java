class mainclass{
    int a=10;
    void displaymsg(){
        System.out.println(++a);
    }
}
class subclass extends mainclass{
    void displaymsg(){
        System.out.println(a);
        super.displaymsg();
    }
}

class methodOR{
    public static void main(String[] args){
        subclass obj = new subclass();
        obj.displaymsg();
    }
}



