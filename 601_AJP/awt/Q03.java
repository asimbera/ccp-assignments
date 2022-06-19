import java.awt.*;

public class Q03 {
    public static void main(String args[]) {
        Frame f = new Frame("hello world");
        f.setSize(400, 200);
        f.setLayout(new GridLayout(1, 2));
        f.add(new Button("YES"));
        f.add(new Button("NO"));
        f.setVisible(true);
    }
}