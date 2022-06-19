import java.awt.*;

public class Q02 {
    public static void main(String args[]) {
        Frame f = new Frame("Hello World");
        f.setSize(300, 200);
        f.setLayout(new FlowLayout());
        Button b = new Button("YES");
        Button m = new Button("NO");
        f.add(b);
        f.add(m);
        f.setVisible(true);
    }
}