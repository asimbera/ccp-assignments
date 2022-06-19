import java.net.*;
import java.io.*;

public class Q03ClientSide {
    public static void main(String args[]) throws Exception {
        byte[] rbuf = new byte[1024], sbuf = new byte[1024];
        BufferedReader fromUser = new BufferedReader(new InputStreamReader(System.in));
        DatagramSocket socket = new DatagramSocket();
        InetAddress addr = InetAddress.getByName(args[0]);
        while (true) {
            System.out.print("Enter an Integer: ");
            String data = fromUser.readLine();
            sbuf = data.getBytes();
            DatagramPacket spkt = new DatagramPacket(sbuf, sbuf.length, addr,
                    5000);
            socket.send(spkt);
            System.out.println("Sent to server: " + data);
            if (data.equals("-1"))
                break;
            DatagramPacket rpkt = new DatagramPacket(rbuf, rbuf.length);
            socket.receive(rpkt);
            data = new String(rpkt.getData(), 0, rpkt.getLength());
            System.out.println("Received from server: " + data);
        }
        socket.close();
    }
}