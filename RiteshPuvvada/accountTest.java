import java.util.*;
public class accountTest{
    public static void main(String[] args) {
        Account account1 = new Account("14785","John", 50000);
        Account account2 = new Account("12587","Bravo",10000);
        System.out.println("Balance of " + account1.getName() + " : " + account1.getBalance());
        System.out.println("Balance of " + account2.getName() + " : " + account2.getBalance());
        account1.transferTo(10000,account2);
        System.out.println("New Amount in Account 1 : " + account1.getBalance());
        System.out.println("Total Amount in Account 2  : " + account2.getBalance());
        }
}

class Account{
    String id,name;
    int balance = 0;
    int credit;
    int debit;
    Account(String ID, String NAME){
        id = ID;
        name = NAME;
    }
    Account(String i, String n, int BALANCE){
        id = i;
        name = n;
        balance = BALANCE;
    }

    String getID(){
        return id;
    }
    String getName(){
        return name;
    }
    double getBalance(){
        return balance;
    }
    int credit(int amount){
        balance += amount;
        return balance;
    }
    int getCredit(){
        return credit;
    }

    int debit(int amount){
        if(amount <= balance){
            balance = balance-amount;
        }
        else
        {
            System.out.println("Amount Exceeded");
        }
        return balance;
    }
    int getDebit(){
        return debit;
    }
        int transferTo(int amount, Account otherPerson){
        if(amount <= balance){
            balance = balance-amount;
            otherPerson.balance = otherPerson.balance + amount;
            System.out.println("Amount Debited from Account 1 is : " + amount);
        }
        else
        {
            System.out.println("Amount Exceeded");
        }
        return balance;
    }
}