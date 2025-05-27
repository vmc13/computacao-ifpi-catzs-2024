public class Aplicativo {
    public static void main(String[] args) {
        Lampada lampada = new Lampada();

        lampada.acender();
        System.out.println("A lâmpada está acesa? " + lampada.acesa);

        lampada.apagar();
        System.out.println("A lâmpada está acesa? " + lampada.acesa);
    }
}
