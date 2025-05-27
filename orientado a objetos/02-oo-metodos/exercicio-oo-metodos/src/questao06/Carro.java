public class Carro {
    public int tanque = 0;

    public void abastecer(int quantidade) {
        tanque += quantidade;
    }

    public void andar() {
        if (tanque > 0) {
            tanque -= 1;
            System.out.println("Carro andou. Combustível restante: " + tanque);
        } else {
            System.out.println("Tanque vazio! Não é possível andar.");
        }
    }
}
