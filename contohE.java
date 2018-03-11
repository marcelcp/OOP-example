class contohE {
   public static void main(String []args) {
       E e1=new E(10,5);
       E e2=new E(7, 8);
 

       int m,n;
       m=10;n=7;
       System.out.println("m = "+m+", n = "+n);
       m=n;
       System.out.println("m = "+m+", n = "+n);
       n=15;
       System.out.println("m = "+m+", n = "+n);

       e1.display();
       e2.display();
       e2=e1;
       e2.display();

       e1.ubah(11,12);
       e1.display();
       e2.display();

       e1.ubah(1,2);
       e2.display();  
       System.out.println("Ubah objek e2, dan efeknya pada e1");
       e2.ubah(25,35);
       e2.display();
       e1.display();


   }
}
