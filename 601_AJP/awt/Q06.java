import java.awt.*;
import javax.swing.*;

public class Q06 {
    public static void main(String[] args) {
        JFrame ob1 = new JFrame("Calculator");
        ob1.setSize(250, 300);
        Panel buttonPanel = new Panel();
        buttonPanel.setLayout(new GridLayout(5, 3, 5, 5));
        for (int i = 1; i < 10; i++) {
            buttonPanel.add(new Button(i + ""));
        }
        String[] extra = { "*", "/", "0", "+", "-", "=" };
        for (int i = 0; i < extra.length; i++) {
            buttonPanel.add(new Button(extra[i]));
        }
        ob1.add(new TextArea(2, 20), BorderLayout.NORTH);
        ob1.add(buttonPanel, BorderLayout.CENTER);
        ob1.setVisible(true);
    }
}