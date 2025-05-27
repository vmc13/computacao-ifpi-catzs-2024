public class Empregado {
    public int hrTrabalhadas;

    public void adicionarHoras(int horas) {
        hrTrabalhadas += horas;
    }

    public double calcularSalario() {
        return hrTrabalhadas * 70.50;
    }
}
