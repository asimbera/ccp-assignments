import java.awt.*;

public class Q05 {
    public static void main(String args[]) {
        Frame f = new Frame("hello world");
        f.setSize(300, 150);
        f.setLayout(new BorderLayout());
        f.add(new Button("North"), BorderLayout.NORTH);
        f.add(new Button("South"), BorderLayout.SOUTH);
        f.add(new Button("East"), BorderLayout.EAST);
        f.add(new Button("West"), BorderLayout.WEST);
        f.add(new Button("Center"), BorderLayout.CENTER);
        f.setVisible(true);
    }
}