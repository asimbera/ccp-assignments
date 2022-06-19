import java.awt.*;
import java.awt.event.*;
public class Demoevent implements WindowListener
{
    public Demoevent()
    {
        GridLayout grid = new GridLayout(1, 3, 5, 5);
        
        Frame f = new Frame("Sign Up");
        f.setSize(600, 400);
        f.setLayout(new FlowLayout());
        f.setVisible(true);
        
        Panel input = new Panel();
        input.setLayout(new GridLayout(3, 1, 5, 5));
        
        Panel ipName = new Panel();
        ipName.setLayout(grid);
        ipName.add(new Label("Name"));
        TextField fName = new TextField(15);
        TextField lName = new TextField(15);
        ipName.add(fName);
        ipName.add(lName);
        
        Panel ipFather = new Panel();
        ipFather.setLayout(grid);
        ipFather.add(new Label("Father's Name"));
        TextField fname = new TextField(15);
        ipFather.add(fname);
        ipFather.add(new Label());
        
        Panel paswrd = new Panel();
        paswrd.setLayout(new GridLayout(2,3,5,5));
        
        paswrd.add(new Label("Password"));
        TextField pass1 = new TextField(15);
        pass1.setEchoChar('*');
        paswrd.add(pass1);
        paswrd.add(new Label());
        
        paswrd.add(new Label("Confirm Password"));
        TextField pass2 = new TextField(15);
        pass2.setEchoChar('*');
        paswrd.add(pass2);
        paswrd.add(new Label());
        
        input.add(ipName);
        input.add(ipFather);
        input.add(paswrd);
        
        Panel chinput = new Panel();
        chinput.setLayout(new FlowLayout(FlowLayout.LEFT, 5, 5));
        
        Panel gender = new Panel();
        gender.setLayout(new GridLayout(1, 4, 5, 5));
        gender.add(new Label("Gender:"));
        CheckboxGroup gendergrp = new CheckboxGroup();
        gender.add(new Checkbox("Male", gendergrp, true));
        gender.add(new Checkbox("Female", gendergrp, false));
        gender.add(new Checkbox("Other", gendergrp, false));
        
        Panel age = new Panel();
        age.setLayout(new GridLayout(1, 2));
        List ageList = new List(3, false);
        for(int i =10; i<30; i++)
            ageList.add(""+i);
        age.add(new Label("Age:"));
        age.add(ageList);
        
        chinput.add(gender);
        chinput.add(age);
        
        Panel btnIp = new Panel();
        btnIp.setLayout(new GridLayout(1, 2, 5, 5));
        Button smt = new Button("Submit");
        smt.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                Object ob = e.getSource();
                if(ob == smt){
                    Frame f1 = new Frame();
                    f1.setLayout(new GridLayout(4, 2));
                    f1.setSize(400, 150);
                    f1.setVisible(true);
                    
                    if(pass1.getText().equals(pass2.getText())){
                        f1.setTitle("New Entry");
                        f1.add(new Label("USER DETAILS:"));
                        String user = new String(fName.getText()+" "+lName.getText()+" , "+gendergrp.getSelectedCheckbox().getLabel()+" "+ageList.getSelectedItem());
                        String password = null;
                        for(int i=0;i<pass1.getText().length();i++){
                            if(i==0)
                                password = pass1.getText().substring(0, 1);
                            else if(i==pass1.getText().length()-1)
                                password = password+""+pass1.getText().substring(i, i+1);
                            else
                                password = password+"*";
                        }
                        f1.add(new Label(user));
                        f1.add(new Label(password));
                    }
                    else{
                        f1.setTitle("Error");
                        f1.add(new Label("Conformation Password not matching!!"));
                    }
                    f1.addWindowListener(new WindowAdapter(){
                        @Override
                        public void windowClosing(WindowEvent e){
                            f1.dispose();
                        }
                    });
                }
            }
        });
        btnIp.add(smt);
        
        Button rst = new Button("Reset");
        rst.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Object ob = e.getSource();
                if(ob==rst){
                    fName.setText("");
                    lName.setText("");
                    fname.setText("");
                    pass1.setText("");
                    pass2.setText("");
                }
            }
        });
        btnIp.add(rst);
        
        f.add(input, BorderLayout.NORTH);
        f.add(chinput, BorderLayout.CENTER);
        f.add(btnIp, BorderLayout.SOUTH);
        
        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e){
                f.dispose();
            }
        });
    }

    @Override
    public void windowOpened(WindowEvent e){}

    @Override
    public void windowClosing(WindowEvent e){}

    @Override
    public void windowClosed(WindowEvent e){}

    @Override
    public void windowIconified(WindowEvent e){}

    @Override
    public void windowDeiconified(WindowEvent e){}

    @Override
    public void windowActivated(WindowEvent e){}

    @Override
    public void windowDeactivated(WindowEvent e){}
    
    public static void main(String args[]){
        Demoevent devent = new Demoevent();
    }
}
