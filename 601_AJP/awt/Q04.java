import java.awt.*;

class Q04 {
    public static void main(String[] args) {
        Frame ob1 = new Frame("Login Page");
        ob1.setSize(350, 200);
        ob1.setLayout(new GridLayout(3, 0));
        Panel idPanel = new Panel();
        ob1.add(idPanel);
        idPanel.setLayout(new FlowLayout());
        idPanel.add(new Label("Username"));
        idPanel.add(new TextField(20));
        Panel passPanel = new Panel();
        ob1.add(passPanel);
        passPanel.setLayout(new FlowLayout());
        passPanel.add(new Label("Password"));
        TextField password = new TextField(20);
        password.setEchoChar('*');
        passPanel.add(password);
        Panel submitPanel = new Panel();
        ob1.add(submitPanel);
        submitPanel.setLayout(new FlowLayout());
        submitPanel.add(new Button("Submit"));
        ob1.setVisible(true);
    }
}