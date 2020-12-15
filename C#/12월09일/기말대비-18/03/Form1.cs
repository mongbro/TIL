using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void div_Click(object sender, EventArgs e)
        {
            int result;
            int a = int.Parse(firstvalue.Text), b = int.Parse(secondvalue.Text);
            try
            {
                result = a / b;
                resultvalue.Text = result.ToString();
            }
            catch (DivideByZeroException)
            {
                resultvalue.Text = "ERROR";
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void mod_Click(object sender, EventArgs e)
        {
            int result;
            int a = int.Parse(firstvalue.Text), b = int.Parse(secondvalue.Text);
            try
            {
                result = a % b;
                resultvalue.Text = result.ToString();
            }
            catch (DivideByZeroException)
            {
                resultvalue.Text = "ERROR";
            }
        }

        private void mul_Click(object sender, EventArgs e)
        {
            int result;
            int a = int.Parse(firstvalue.Text), b = int.Parse(secondvalue.Text);
            result = a * b;
            resultvalue.Text = result.ToString();
        }

        private void sub_Click(object sender, EventArgs e)
        {
            int result;
            int a = int.Parse(firstvalue.Text), b = int.Parse(secondvalue.Text);
            result = a - b;
            resultvalue.Text = result.ToString();
        }

        private void add_Click(object sender, EventArgs e)
        {
            int result;
            int a = int.Parse(firstvalue.Text), b = int.Parse(secondvalue.Text);
            result = a + b;
            resultvalue.Text = result.ToString();
        }
    }
}
