import java.net.*;
import java.io.*;

public class Q03ServerSide {
    public static void main(String args[]) throws Exception {
        DatagramSocket socket = new DatagramSocket(5000);
        System.out.println("Server Ready");
        while (true) {
            byte[] rbuf = new byte[10];
            DatagramPacket rpkt = new DatagramPacket(rbuf, rbuf.length);
            socket.receive(rpkt);
            System.out.println("Received a packet");
            new Handler(rpkt, socket);
        }
    }
}

class Handler implements Runnable {
    DatagramSocket socket;
    DatagramPacket pkt;

    Handler(DatagramPacket pkt, DatagramSocket socket) {
        this.pkt = pkt;
        this.socket = socket;
        new Thread(this).start();
        System.out.println("A thread created");
    }

    public void run() {
        try {
            byte[] sbuf = new byte[10];
            String data = new String(pkt.getData(), 0, pkt.getLength());
            InetAddress addr = pkt.getAddress();
            int port = pkt.getPort();
            int fact = 1, n = Integer.parseInt(data);
            System.out.println("Received: " + n + " from " + addr + ":" + port);
            for (int i = 2; i <= n; i++)
                fact *= i;
            sbuf = String.valueOf(fact).getBytes();
            DatagramPacket spkt = new DatagramPacket(sbuf, sbuf.length, addr,
                    port);
            socket.send(spkt);
            System.out.println("Sent: " + fact);
        } catch (IOException e) {
        }
    }
}