import java.awt.*;
import javax.swing.*;

public class Q03 {
    public static void main(String args[]) throws Exception {
        final JFrame f = new JFrame("JProgressBar ");
        f.setSize(200, 80);
        Container c = f.getContentPane();
        c.setLayout(new FlowLayout());
        JProgressBar pb = new JProgressBar(0, 100);
        pb.setStringPainted(true);
        c.add(pb);
        for (int i = 0; i <= 100; i++) {
            pb.setValue(i);
            Thread.sleep(100);
        }
        f.setVisible(true);
    }
}