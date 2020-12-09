using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 기말대비_01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar.ToString() == "0" || e.KeyChar.ToString() == "1" || e.KeyChar.ToString() == "2" 
                || e.KeyChar.ToString() == "3" || e.KeyChar.ToString() == "4" || e.KeyChar.ToString() == "5" 
                || e.KeyChar.ToString() == "6" || e.KeyChar.ToString() == "7" || e.KeyChar.ToString() == "8" 
                || e.KeyChar.ToString() == "9" || e.KeyChar.ToString() == "-")
            {

            }

            else
            {
                MessageBox.Show("숫자와 '-' 만 입력하세요", "입력오류", MessageBoxButtons.OK, MessageBoxIcon.Error);
                e.Handled = true;
            }
        }
    }
}