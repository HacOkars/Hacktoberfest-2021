import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.Socket;

public class ClientSocket {

    static final int PORT = 50001;

	public static void main(String[] args) {
		
		try{
			Socket client = new Socket("127.0.0.1", PORT);
			InputStream is = client.getInputStream();
			BufferedReader bfr = new BufferedReader(new InputStreamReader(is));
			String response = bfr.readLine();
			System.out.println("Response from server : "+response);
			client.close();
		}catch(IOException e) {
			e.printStackTrace();
		}
	}
}
