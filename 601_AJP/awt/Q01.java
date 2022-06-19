import java.awt.*;

public class Q01 {
    public static void main(String args[]) {
        Frame f = new Frame("Frame Title");
        f.setSize(300, 200);
        Label l = new Label("text is here");
        f.add(l);
        f.setVisible(true);
    }
}