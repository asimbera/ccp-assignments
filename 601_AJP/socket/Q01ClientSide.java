import java.io.*;
import java.net.*;
import java.awt.*;
import java.awt.event.*;

public class Q01ClientSide {
    public static void main(String[] args) throws Exception {
        final int port = 7999;
        Socket cliSock = new Socket("localhost", port);
        System.out.println("Connected to SERVER @localhost:" + port);
        PrintWriter servInput = new PrintWriter(cliSock.getOutputStream(), true);
        BufferedReader servResp = new BufferedReader(new InputStreamReader(cliSock.getInputStream()));
        BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter and integer: ");
        String data = userInput.readLine();
        servInput.println(data);
        System.out.println("Sent to server: " + data);
        String fact = servResp.readLine();
        System.out.println("Recieved from server: " + fact);
        cliSock.close();
    }
}