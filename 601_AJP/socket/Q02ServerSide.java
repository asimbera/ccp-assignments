import java.io.*;
import java.net.*;

class Q02ServerSide {
    public static void main(String argv[]) throws Exception {
        ServerSocket welcomeSocket = new ServerSocket(6789);
        System.out.println("Server Ready");
        while (true) {
            Socket serverEnd = welcomeSocket.accept();
            System.out.println("Request accepted");
            new Handler(serverEnd);
        }
    }
}

class Handler implements Runnable {
    Socket serverEnd;

    Handler(Socket s) {
        this.serverEnd = s;
        new Thread(this).start();
        System.out.println("A Thread created");
    }

    public void run() {
        try {
            BufferedReader fromClient = new BufferedReader(new InputStreamReader(serverEnd.getInputStream()));
            PrintWriter toClient = new PrintWriter(serverEnd.getOutputStream(), true);
            while (true) {
                int n = Integer.parseInt(fromClient.readLine());
                System.out.println("Received " + n);
                if (n == -1) {
                    serverEnd.close();
                    break;
                }
                int fact = 1;
                for (int i = 2; i <= n; i++) {
                    fact *= i;
                }
                toClient.println(fact);
                System.out.println("Sent: " + fact);
            }
        } catch (IOException e) {
        }
    }
}