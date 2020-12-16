using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _18_7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            string s = "";
            if (e.KeyCode.ToString() != "Menu" && e.KeyCode.ToString() != "ShiftKey" && e.KeyCode.ToString() != "ControlKey")
                s += e.KeyCode;
            if (e.Control)
                s += " + ctrl";
            if (e.Alt)
                s += " + alt";
            if (e.Shift)
                s += " + shift";
            if (e.KeyCode.ToString() != "Menu" && e.KeyCode.ToString() != "ShiftKey" && e.KeyCode.ToString() != "ControlKey")
                MessageBox.Show(s, "누른키", MessageBoxButtons.OK);

        }
    }
}
