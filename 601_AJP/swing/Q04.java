import java.awt.*;
import javax.swing.*;
import javax.swing.tree.DefaultMutableTreeNode;

public class Q04 {
    public static void main(String args[]) {
        final JFrame f = new JFrame("JTree Demo ");
        f.setSize(200, 80);
        Container c = f.getContentPane();
        c.setLayout(new FlowLayout());
        DefaultMutableTreeNode root = new DefaultMutableTreeNode("Computer"),
                c1 = new DefaultMutableTreeNode("HDD"),
                c2 = new DefaultMutableTreeNode("CPU"),
                c3 = new DefaultMutableTreeNode("Mouse");
        root.add(c1);
        root.add(c2);
        root.add(c3);
        c1.add(new DefaultMutableTreeNode("Seagate"));
        c1.add(new DefaultMutableTreeNode("Samsung"));
        c2.add(new DefaultMutableTreeNode("Intel"));
        c2.add(new DefaultMutableTreeNode("IBM"));
        c3.add(new DefaultMutableTreeNode("Dell"));
        c3.add(new DefaultMutableTreeNode("HP"));
        JTree t = new JTree(root);
        c.add(t);
        f.pack();
        f.setVisible(true);
    }
}