public class Aplicativo {
    public static void main(String[] args) {
        Carro carro = new Carro();

        carro.abastecer(3);
        carro.andar();
        carro.andar();
        carro.andar();
        carro.andar(); // deve avisar que está sem combustível
    }
}
