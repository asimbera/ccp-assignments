import java.awt.*;
import java.awt.event.*;

public class Q09 extends Frame {
    TextField t = new TextField(15);

    Q09() {
        setSize(200, 150);
        setLayout(new FlowLayout());
        add(t);
        t.addKeyListener(new KeyListener() {
            public void keyPressed(KeyEvent e) {
            }

            public void keyReleased(KeyEvent e) {
                int cp = t.getCaretPosition();
                t.setText(t.getText().toUpperCase());
                t.setCaretPosition(cp);
            }

            public void keyTyped(KeyEvent e) {
            }
        });
        setVisible(true);
    }

    public static void main(String args[]) {
        new Q09();
    }
}