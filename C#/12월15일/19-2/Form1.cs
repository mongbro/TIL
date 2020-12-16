using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _19_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void addbtn_Click(object sender, EventArgs e)
        {
            int result;
            result = int.Parse(textBox1.Text) + int.Parse(textBox2.Text);
            textBox3.Text = result.ToString();
        }

        private void mulbtn_Click(object sender, EventArgs e)
        {
            int result;
            result = int.Parse(textBox1.Text) * int.Parse(textBox2.Text);
            textBox3.Text = result.ToString();
        }

        private void subbtn_Click(object sender, EventArgs e)
        {
            int result;
            result = int.Parse(textBox1.Text) - int.Parse(textBox2.Text);
            textBox3.Text = result.ToString();
        }

        private void modbtn_Click(object sender, EventArgs e)
        {
            double result;
            if (double.Parse(textBox2.Text) == 0)
                textBox3.Text = "ERROR";
            else
            {
                result = double.Parse(textBox1.Text) % double.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }

        private void divbtn_Click(object sender, EventArgs e)
        {
            double result;
            if (double.Parse(textBox2.Text) == 0)
                textBox3.Text = "ERROR";
            else
            {
                result = double.Parse(textBox1.Text) / double.Parse(textBox2.Text);
                textBox3.Text = result.ToString();
            }
        }
    }
}
