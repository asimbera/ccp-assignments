import java.awt.*;

public class Q07 {
    public static void main(String args[]) {
        Frame f = new Frame("BRANCH");
        f.setSize(300, 100);
        f.setLayout(new GridLayout(6, 2));
        f.add(new Checkbox("CST", null, true));
        f.add(new Checkbox("ETC"));
        f.add(new Checkbox("ME"));
        f.setVisible(true);
    }
}