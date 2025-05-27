public class Aplicativo {
    public static void main(String[] args) {
        Carro carro = new Carro();

        carro.acelerar();
        carro.acelerar();
        carro.acelerar();
        carro.frear();

        System.out.println("Velocidade final: " + carro.velocidade);
    }
}
