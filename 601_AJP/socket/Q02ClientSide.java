import java.io.*;
import java.net.*;

public class Q02ClientSide {
    public static void main(String argv[]) throws Exception {
        String fact;
        Socket clientEnd = new Socket("localhost", 6789);
        System.out.println("connected to localhost at port 6789");
        PrintWriter toServer = new PrintWriter(clientEnd.getOutputStream(), true);
        BufferedReader fromServer = new BufferedReader(new InputStreamReader(clientEnd.getInputStream()));
        BufferedReader fromUser = new BufferedReader(new InputStreamReader(System.in));
        while (true) {
            System.out.print("Enter an integer: ");
            String n = fromUser.readLine();
            toServer.println(n);
            System.out.println("Sent to server: " + n);
            if (n.equals("-1"))
                break;
            fact = fromServer.readLine();
            System.out.println("Received from server: " + fact);
        }
        clientEnd.close();
    }
}