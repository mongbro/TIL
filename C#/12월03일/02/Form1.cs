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

        private void addbtn_Click(object sender, EventArgs e)
        {
            int result;
            result = Convert.ToInt32(value1.Text) + Convert.ToInt32(value2.Text);
            value3.Text = Convert.ToString(result);
        }

        private void divbtn_Click(object sender, EventArgs e)
        {
            int result;
            try
            {
                result = Convert.ToInt32(value1.Text) / Convert.ToInt32(value2.Text);
                value3.Text = Convert.ToString(result);
            }
            catch (DivideByZeroException)
            {
                value3.Text = "ERROR";
            }    
        }

        private void mulbtn_Click(object sender, EventArgs e)
        {
            int result;
            result = Convert.ToInt32(value1.Text) * Convert.ToInt32(value2.Text);
            value3.Text = Convert.ToString(result);
        }

        private void subbtn_Click(object sender, EventArgs e)
        {
            int result;
            result = Convert.ToInt32(value1.Text) - Convert.ToInt32(value2.Text);
            value3.Text = Convert.ToString(result);
        }

        private void modbtn_Click(object sender, EventArgs e)
        {
            int result;
            try
            {
                result = Convert.ToInt32(value1.Text) % Convert.ToInt32(value2.Text);
                value3.Text = Convert.ToString(result);
            }
            catch (DivideByZeroException)
            {
                value3.Text = "ERROR";
            }
        }

    }
}
