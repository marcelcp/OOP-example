class aksTemp 
{
    public static void main(String []args) {
        Temperatur t=new Temperatur(100,'R');
        System.out.println("Unit temperatur objek : "+t.currentUnit());
        System.out.println("Nilai dalam celsius = "+t.tempInCelsius());
       System.out.println("Unit temperatur objek : "+t.currentUnit());
    }
}
