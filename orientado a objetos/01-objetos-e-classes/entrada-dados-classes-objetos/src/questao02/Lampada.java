public class Lampada {
    public boolean acesa;


    public Lampada() {
        acesa = false;
    }

    public void acender() {
        acesa = true;
    }

    public void apagar() {
        acesa = false;
    }

    public void mostrarEstado() {
        if (acesa) {
            System.out.println("A lâmpada está acesa.");
        } else {
            System.out.println("A lâmpada está apagada.");
        }
    }
}
