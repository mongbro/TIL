using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            FontDialog fd = fontDialog1;
            if (color.Checked)
                fd.ShowColor = true;
            if (apply.Checked)
                fd.ShowApply = true;
            DialogResult dr = fd.ShowDialog();
            if (dr == DialogResult.OK)
            {
                button1.Font = fd.Font;
                button1.ForeColor = fd.Color;
            }
            else if (dr == DialogResult.Cancel) { }
        }
        private void fontDialog1_Apply(object sender, EventArgs e)
        {
            button1.Font = fontDialog1.Font;
            button1.ForeColor = fontDialog1.Color;
        }

    }
}
