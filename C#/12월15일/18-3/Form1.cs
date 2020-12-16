using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _18_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void add_Click(object sender, EventArgs e)
        {
            int result;
            result = int.Parse(textBox1.Text) + int.Parse(textBox2.Text);
            textBox3.Text = result.ToString();
        }

        private void sub_Click(object sender, EventArgs e)
        {
            int result;
            result = int.Parse(textBox1.Text) - int.Parse(textBox2.Text);
            textBox3.Text = result.ToString();
        }

        private void div_Click(object sender, EventArgs e)
        {
            if (double.Parse(textBox2.Text) == 0)
                textBox3.Text = "ERROR";
            else
            {
                double result;
                result = double.Parse(textBox1.Text) / double.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }

        private void mul_Click(object sender, EventArgs e)
        {
            int result;
            result = int.Parse(textBox1.Text) * int.Parse(textBox2.Text);
            textBox3.Text = result.ToString();
        }

        private void mod_Click(object sender, EventArgs e)
        {
            if (double.Parse(textBox2.Text) == 0)
                textBox3.Text = "ERROR";
            else
            {
                double result;
                result = double.Parse(textBox1.Text) % double.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }
    }
}
