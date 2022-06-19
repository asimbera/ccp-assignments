import java.awt.*;
import javax.swing.*;

public class Q02 {
    public static void main(String args[]) {
        final JFrame f = new JFrame("JTable ");
        f.setSize(250, 150);
        Container c = f.getContentPane();
        c.setLayout(new FlowLayout());
        int row = 4, col = 2;
        JTable table = new JTable(row, col);
        for (int i = 0; i < row; i++) {
            table.setValueAt(i, i, 0);
            table.setValueAt(i * i, i, 1);
        }
        c.add(table);
        f.setVisible(true);
    }

}