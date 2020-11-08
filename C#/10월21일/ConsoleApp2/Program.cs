using System;
using System.ComponentModel.DataAnnotations;
using System.Runtime.CompilerServices;
using System.Threading;

namespace ConsoleApp2
{
    class Account
    {
        private double balance;
        public Account(double initialDeposit)
        {
            balance = initialDeposit;
        }
        public double Balance
        {
            get { return balance; }
            set { balance = value; }
        }
        public void Deposit(double amount)
        {
            lock (this)
            {
                Thread.Sleep(1000);
                balance += amount;
            }
        }
    }
    class Teller
    {
        String name;
        Account account;
        double amount;
        public Teller(string name, Account account, double amoung)
        {
            this.name = name;
            this.account = account;
            this.amount = amoung;
        }
        public void TellerTask()
        {
            account.Deposit(amount);
            Console.WriteLine(name + " : " + account.Balance);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Account a = new Account(0);
            Teller t1 = new Teller("Teller1", a, 200);
            Teller t2 = new Teller("Teller2", a, 200);
            Thread tt1 = new Thread(new ThreadStart(t1.TellerTask));
            Thread tt2 = new Thread(new ThreadStart(t2.TellerTask));
            tt1.Start();tt2.Start();
        }
    }
}