import javax.swing.JButton;
import javax.swing.JPanel;
public class inputs extends javax.swing.JPanel {
	private display display;
    private JPanel block;
    private JButton inputButton;
    private int numberOfInput;
    public inputs(display display, JPanel block, JButton inputButton, int numberOfInput) {
        this.display = display;
        this.block = block;
        this.inputButton = inputButton;
        this.numberOfInput = numberOfInput;
        initComponents();
        if(numberOfInput < 7) {
            this.remove(seven);
            this.remove(eight);
            this.remove(nine);
        }
    }
    @SuppressWarnings("unchecked")                         
    private void initComponents() {
        one = new javax.swing.JButton();
        two = new javax.swing.JButton();
        three = new javax.swing.JButton();
        four = new javax.swing.JButton();
        five = new javax.swing.JButton();
        six = new javax.swing.JButton();
        seven = new javax.swing.JButton();
        eight = new javax.swing.JButton();
        nine = new javax.swing.JButton();
        setLayout(new java.awt.GridLayout(3, 3));
        one.setBackground(new java.awt.Color(255, 255, 255));
        one.setText("1");
        one.setAlignmentY(0.0F);
        one.setIconTextGap(1);
        one.setMargin(new java.awt.Insets(2, 2, 2, 2));
        one.setMinimumSize(new java.awt.Dimension(15, 15));
        one.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(one);
        two.setBackground(new java.awt.Color(255, 255, 255));
        two.setText("2");
        two.setAlignmentY(0.0F);
        two.setIconTextGap(1);
        two.setMargin(new java.awt.Insets(2, 2, 2, 2));
        two.setMinimumSize(new java.awt.Dimension(15, 15));
        two.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(two);
        three.setBackground(new java.awt.Color(255, 255, 255));
        three.setText("3");
        three.setAlignmentY(0.0F);
        three.setIconTextGap(1);
        three.setMargin(new java.awt.Insets(2, 2, 2, 2));
        three.setMinimumSize(new java.awt.Dimension(15, 15));
        three.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(three);
        four.setBackground(new java.awt.Color(255, 255, 255));
        four.setText("4");
        four.setAlignmentY(0.0F);
        four.setIconTextGap(1);
        four.setMargin(new java.awt.Insets(2, 2, 2, 2));
        four.setMinimumSize(new java.awt.Dimension(15, 15));
        four.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(four);
        five.setBackground(new java.awt.Color(255, 255, 255));
        five.setText("5");
        five.setAlignmentY(0.0F);
        five.setIconTextGap(1);
        five.setMargin(new java.awt.Insets(2, 2, 2, 2));
        five.setMinimumSize(new java.awt.Dimension(15, 15));
        five.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(five);
        six.setBackground(new java.awt.Color(255, 255, 255));
        six.setText("6");
        six.setAlignmentY(0.0F);
        six.setIconTextGap(1);
        six.setMargin(new java.awt.Insets(2, 2, 2, 2));
        six.setMinimumSize(new java.awt.Dimension(15, 15));
        six.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(six);
        seven.setBackground(new java.awt.Color(255, 255, 255));
        seven.setText("7");
        seven.setAlignmentY(0.0F);
        seven.setIconTextGap(1);
        seven.setMargin(new java.awt.Insets(2, 2, 2, 2));
        seven.setMinimumSize(new java.awt.Dimension(15, 15));
        seven.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(seven);
        eight.setBackground(new java.awt.Color(255, 255, 255));
        eight.setText("8");
        eight.setAlignmentY(0.0F);
        eight.setIconTextGap(1);
        eight.setMargin(new java.awt.Insets(2, 2, 2, 2));
        eight.setMinimumSize(new java.awt.Dimension(15, 15));
        eight.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(eight);
        nine.setBackground(new java.awt.Color(255, 255, 255));
        nine.setText("9");
        nine.setAlignmentY(0.0F);
        nine.setIconTextGap(1);
        nine.setMargin(new java.awt.Insets(2, 2, 2, 2));
        nine.setMinimumSize(new java.awt.Dimension(15, 15));
        nine.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                setAns(evt);
            }
        });
        add(nine);
    }                        
    private void setAns(java.awt.event.ActionEvent evt) {
        display.setInput(evt.getActionCommand(), block, inputButton);
    }          
    private javax.swing.JButton eight;
    private javax.swing.JButton five;
    private javax.swing.JButton four;
    private javax.swing.JButton nine;
    private javax.swing.JButton one;
    private javax.swing.JButton seven;
    private javax.swing.JButton six;
    private javax.swing.JButton three;
    private javax.swing.JButton two;

}
