public class E
{
    private int a;
    private int b;
    E(int pa,int pb) {
       a=pa;
       b=pb;
    }

    public void ubah(int pa,int pb) {
        a=pa;
        b=pb;
    }

    public void display() {
        System.out.println("a = "+a+", b = "+b);
    }
}
