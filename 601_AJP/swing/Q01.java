import java.awt.*;
import javax.swing.*;

public class Q01 {
    public static void main(String args[]) {
        final JFrame f = new JFrame("JPasswordField ");
        f.setSize(200, 150);
        Container c = f.getContentPane();
        c.setLayout(new FlowLayout());
        c.add(new JLabel("Password"));
        final JPasswordField pf = new JPasswordField(10);
        c.add(pf);
        f.setVisible(true);
    }
}