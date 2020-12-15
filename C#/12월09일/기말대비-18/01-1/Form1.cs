using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _01_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void forward_Click(object sender, EventArgs e)
        {
            button2.BringToFront();
        }

        private void visible_Click(object sender, EventArgs e)
        {
            button1.Visible = true;
        }

        private void behind_Click(object sender, EventArgs e)
        {
            button2.SendToBack();
        }

        private void invisible_Click(object sender, EventArgs e)
        {
            button1.Visible = false;
        }
    }
}
