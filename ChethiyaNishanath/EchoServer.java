import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;
 
public class EchoServer {
	
	static final int PORT = 7;
 
	public static void main(String[] args) {
		ServerSocket serverSocket;
		try {
			serverSocket = new ServerSocket(PORT);
			System.out.println("Server listening to PORT : "+serverSocket.getLocalPort());
			
			while(true) {
				System.out.println("Waiting for client...");
				Socket clientSocket = serverSocket.accept();
				System.out.println("Client connected with IP : "+clientSocket.getLocalAddress());
				
				InputStream is = clientSocket.getInputStream();
				BufferedReader bfr = new BufferedReader(new InputStreamReader(is));
				String inputData = bfr.readLine();
				DataOutputStream os = new DataOutputStream(clientSocket.getOutputStream());
				System.out.println("Echo message");
				os.writeBytes("Echo from server : "+inputData);
				clientSocket.close();
				System.out.println("Task completed\tClient connection closed");
			}
			
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
