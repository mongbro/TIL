using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _18_4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DialogResult dr = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.OK);
            if(dr == DialogResult.OK) 
                dr = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.OKCancel);
            if(dr == DialogResult.OK)
                dr = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.AbortRetryIgnore);
            if(dr == DialogResult.Retry)
                dr = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.YesNoCancel);
            if(dr == DialogResult.Yes)
                dr = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.YesNo);
            if(dr == DialogResult.Yes)
                dr = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.RetryCancel);
        }
    }
}
