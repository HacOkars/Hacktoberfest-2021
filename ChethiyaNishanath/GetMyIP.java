import java.net.InetAddress;
import java.net.UnknownHostException;

public class GetMyIP {

	public static void main(String[] args) {
		System.out.println("***Hello Welcome***");
		try {
			InetAddress localhost = InetAddress.getLocalHost();
			System.out.println("Your IP Address : " +(localhost.getHostAddress()).trim());
		} catch (UnknownHostException e) {
			e.printStackTrace();
		}
	}

}