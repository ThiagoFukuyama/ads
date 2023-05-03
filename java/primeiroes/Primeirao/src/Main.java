
import java.util.Scanner;
import javax.swing.JOptionPane;
public class Main {
    public static void main(String[] args) {

        System.out.println("2 * 2 * 2 = " + (2 * 2 * 2));
        System.out.println("2 / 2 / 2 = " + (2.0 / 2 / 2));
        System.out.println("2 - 2 - 2 = " + (2 - 2 - 2));
        System.out.println("2 + 2 + 2 = " + (2 + 2 + 2));


        Scanner leia = new Scanner(System.in);

        System.out.print("\nPrimeirão rapaziada: ");
        String oi = leia.nextLine();

        JOptionPane.showMessageDialog(null, oi, "Janelinha", JOptionPane.INFORMATION_MESSAGE);

    }

}