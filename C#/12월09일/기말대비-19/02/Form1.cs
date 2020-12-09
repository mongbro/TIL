using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void add_Click(object sender, EventArgs e)
        {
            int a, b, result;
            a = int.Parse(textBox1.Text);
            b = int.Parse(textBox2.Text);
            result = a + b;
            textBox3.Text = result.ToString();
        }

        private void sub_Click(object sender, EventArgs e)
        {
            int a, b, result;
            a = int.Parse(textBox1.Text);
            b = int.Parse(textBox2.Text);
            result = a - b;
            textBox3.Text = result.ToString();
        }

        private void mul_Click(object sender, EventArgs e)
        {
            int a, b, result;
            a = int.Parse(textBox1.Text);
            b = int.Parse(textBox2.Text);
            result = a * b;
            textBox3.Text = result.ToString();
        }

        private void div_Click(object sender, EventArgs e)
        {
            int a, b, result;
            a = int.Parse(textBox1.Text);
            b = int.Parse(textBox2.Text);
            try
            {
                result = a / b;
                textBox3.Text = result.ToString();
            }
            catch (DivideByZeroException)
            {
                textBox3.Text = "ERROR";
            }
        }

        private void mod_Click(object sender, EventArgs e)
        {
            int a, b, result;
            a = int.Parse(textBox1.Text);
            b = int.Parse(textBox2.Text);
            try
            {
                result = a % b;
                textBox3.Text = result.ToString();
            }
            catch (DivideByZeroException)
            {
                textBox3.Text = "ERROR";
            }
        }
    }
}
