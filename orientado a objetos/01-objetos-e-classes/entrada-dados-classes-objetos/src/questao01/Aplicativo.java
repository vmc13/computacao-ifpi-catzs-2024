
import javax.swing.JOptionPane;

public  class Aplicativo {
    public static void main(String[] args) {
        Pessoa p1 = new Pessoa();
        p1.nome = "Victória";
        p1.idade = 22;
        JOptionPane.showMessageDialog(null, p1.nome);
        JOptionPane.showMessageDialog(null, p1.idade);
    }
}