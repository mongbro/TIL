using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _04
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DialogResult dlgrst1 = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.OK);
            if (dlgrst1 == DialogResult.OK)
               dlgrst1 = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.OKCancel);
            if(dlgrst1 == DialogResult.OK)
                dlgrst1 = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.AbortRetryIgnore);
            if (dlgrst1 == DialogResult.Retry)
                dlgrst1 = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.YesNoCancel);
            if (dlgrst1 == DialogResult.Yes)
                dlgrst1 = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.YesNo);
            if (dlgrst1 == DialogResult.Yes)
                dlgrst1 = MessageBox.Show("나를 시험에 들게 하지 마시오", "Title Bar", MessageBoxButtons.RetryCancel);
        }
    }
}
