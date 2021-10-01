import java.awt.*;
import java.awt.event.*;
import java.net.*;
import java.util.*;
import java.io.*;
import javax.swing.*;

public class Client extends JFrame implements ActionListener {
	private static final long serialVersionUID = 1L;
	static Socket socket;
	static int PORT;
	PrintWriter out;
	JPanel jPanel, jPanel1, jPanel2;
	JTextArea textArea;
	JButton startbutton, sendbutton;
	JLabel portLabel, namePort;
	JTextField messageTextField, nameTextField, portTextField;
	String clientName;

	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Client client = new Client();
					System.setOut(new PrintStream(new TextAreaOutputStream(client.textArea)));
					client.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	public Client() {
		super("Chat Client");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 600, 400);
		jPanel = new JPanel();
		setContentPane(jPanel);
		jPanel.setLayout(new BorderLayout(0, 0));
		jPanel1 = new JPanel();
		jPanel.add(jPanel1, BorderLayout.NORTH);
		jPanel1.setLayout(new FlowLayout());
		namePort = new JLabel("Name");
		jPanel1.add(namePort);
		nameTextField = new JTextField();
		nameTextField.setColumns(10);
		jPanel1.add(nameTextField);
		portLabel = new JLabel("Port");
		jPanel1.add(portLabel);
		portTextField = new JTextField();
		jPanel1.add(portTextField);
		portTextField.setColumns(10);
		startbutton = new JButton("START");
		jPanel1.add(startbutton);
		startbutton.addActionListener(this);
		JScrollPane scrollPane = new JScrollPane();
		jPanel.add(scrollPane);
		textArea = new JTextArea();
		textArea.setLineWrap(true);
		scrollPane.setViewportView(textArea);
		jPanel2 = new JPanel();
		jPanel2.setLayout(new FlowLayout());
		jPanel.add(jPanel2, BorderLayout.SOUTH);
		messageTextField = new JTextField();
		jPanel2.add(messageTextField);
		messageTextField.setColumns(40);
		sendbutton = new JButton("SEND");
		sendbutton.addActionListener(this);
		jPanel2.add(sendbutton);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == startbutton) {
			if (startbutton.getText().equals("START")) {
				startbutton.setText("STOP");
				start();
			} else {
				startbutton.setText("START");
				stop();
			}
		} else if (e.getSource() == sendbutton) {
			String message = messageTextField.getText().trim();
			if (!message.isEmpty()) {
				out.println(message);
				messageTextField.setText("");
			}
		}
	}

	public void start() {
		try {
			PORT = Integer.parseInt(portTextField.getText().trim());
			clientName = nameTextField.getText().trim();
			socket = new Socket("localhost", PORT);
			out = new PrintWriter(socket.getOutputStream(), true);
			new Thread(new ServerListener()).start();
			out.println(clientName);
		} catch (Exception err) {
			System.out.printf("%s %s\n", Server.sdf.format(new Date()), "<ERROR-> " + err.getLocalizedMessage());
		}
	}

	public void stop() {
		if (!socket.isClosed()) {
			try {
				socket.close();
			} catch (IOException e1) {
			}
		}
	}

	private static class ServerListener implements Runnable {
		private BufferedReader in;

		@Override
		public void run() {
			try {
				in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
				String read;
				for (;;) {
					read = in.readLine();
					if (read != null && !(read.isEmpty()))
						System.out.printf("%s %s\n", Server.sdf.format(new Date()), read);
				}
			} catch (IOException e) {
				return;
			}
		}
	}
}
