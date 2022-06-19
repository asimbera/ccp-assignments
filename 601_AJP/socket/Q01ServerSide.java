import java.io.*;
import java.net.*;

public class Q01ServerSide {
    public static void main(String[] args) throws Exception {
        final int port = 7999;
        ServerSocket pServerS = new ServerSocket(port);
        System.out.println("Waiting for Connection @localhost:" + port);
        Socket servSock = pServerS.accept();
        System.out.println("Connection Established");
        BufferedReader clientInput = new BufferedReader(new InputStreamReader(servSock.getInputStream()));
        PrintWriter clientOutput = new PrintWriter(servSock.getOutputStream(), true);
        int data = Integer.parseInt(clientInput.readLine());
        System.out.println("Client Input:" + data);
        int fact = 1;
        for (int i = 2; i <= data; i++) {
            fact *= i;
        }
        clientOutput.println(fact);
        System.out.println("Server Response sent to client: " + fact);
    }
}