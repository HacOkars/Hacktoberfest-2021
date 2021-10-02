import java.io.DataOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Date;

public class DayTimeServer {
	
	static final int PORT = 13;
	
	public static void main(String[] args) {
		
		ServerSocket serverSocket;
		try {
			serverSocket = new ServerSocket(PORT);
			System.out.println("Server listening to PORT : "+serverSocket.getLocalPort());
			
			while(true) {
				Socket clientSocket = serverSocket.accept();
				System.out.println("Client connected with IP : "
				+clientSocket.getLocalAddress());
				DataOutputStream os = new DataOutputStream(clientSocket.getOutputStream());
				String date = new Date().toString();
				os.writeBytes(date);
				clientSocket.close();
				System.out.println("Task completed\tClient connection closed");
			}
			
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
}
