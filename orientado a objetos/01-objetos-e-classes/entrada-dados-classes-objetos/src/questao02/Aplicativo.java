public class Aplicativo {
    public static void main(String[] args) {
        Lampada lampada = new Lampada();

        lampada.mostrarEstado(); // Deve mostrar "apagada"

        lampada.acender();
        lampada.mostrarEstado(); // Deve mostrar "acesa"

        lampada.apagar();
        lampada.mostrarEstado(); // Deve mostrar "apagada" de novo
    }
}
