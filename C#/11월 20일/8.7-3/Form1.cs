using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _8._7_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void decimalvalue_TextChanged(object sender, EventArgs e)
        {

        }

        private void convertbtn_Click(object sender, EventArgs e)
        {
            binaryvalue.Text = Convert.ToString(int.Parse(decimalvalue.Text), 2);
        }

        private void binaryvalue_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
