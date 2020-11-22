using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _8._7_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void divbtn_Click(object sender, EventArgs e)
        {
            try
            {
                int result = int.Parse(value1.Text) / int.Parse(value2.Text);
                rstlabel.Text = Convert.ToString(result);
            }
            catch (DivideByZeroException)
            {
                rstlabel.Text = "0으로 나누기 불가";
            }
        }

        private void mulbtn_Click(object sender, EventArgs e)
        {
            int result = int.Parse(value1.Text) * int.Parse(value2.Text);
            rstlabel.Text = Convert.ToString(result);
        }

        private void subbtn_Click(object sender, EventArgs e)
        {
            int result = int.Parse(value1.Text) - int.Parse(value2.Text);
            rstlabel.Text = Convert.ToString(result);
        }

        private void addbtn_Click(object sender, EventArgs e)
        {
            int result = int.Parse(value1.Text) + int.Parse(value2.Text);
            rstlabel.Text = Convert.ToString(result);
        }

        private void modbtn_Click(object sender, EventArgs e)       // 모드는 0으로 가능한걸로 아는데 왜 안되는 건지 모르겠습니다.
        {
            try
            {
                int result = int.Parse(value1.Text) % int.Parse(value2.Text);
                rstlabel.Text = Convert.ToString(result);
            }
            catch (DivideByZeroException)
            {
                rstlabel.Text = "0으로 나누기 불가";
            }
        }

    }
}
