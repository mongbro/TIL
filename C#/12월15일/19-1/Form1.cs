using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _19_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {

            if (check(e.KeyChar.ToString())) { }
            else
            {
                MessageBox.Show("숫자와 '-'만 입력하세요.", "입력오류", MessageBoxButtons.OK, MessageBoxIcon.Error);
                e.Handled = true;
            }
        }
        private Boolean check(string str)
        {
            string[] num = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "-" };
            for(int i = 0; i < 11; i++)
            {
                if (str.Equals(num[i]))
                    return true;
            }
            return false;
        }
    }
}
