import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class SocketServer {

    static final int PORT = 50001;

	public static void main(String[] args) {

		while(true) {
			try {
				ServerSocket server = new ServerSocket(PORT);
				System.out.println("Waiting for client...");
				Socket client = server.accept();
				System.out.println("Client connected : "+client.getLocalAddress());
				DataOutput os = new DataOutputStream(client.getOutputStream());
				os.writeBytes("Hello from server");
				client.close();
				server.close();
			}catch (IOException e) {
				e.printStackTrace();
			}
		}
	}
}