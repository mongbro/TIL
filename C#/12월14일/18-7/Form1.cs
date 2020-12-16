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
            string str = "";
            if (e.KeyCode.ToString() != "Menu" && e.KeyCode.ToString() != "ControlKey" && e.KeyCode.ToString() != "ShiftKey")
                str += e.KeyCode;
            if (e.Control)
                str += " + ctrl";
            if (e.Alt)
                str += " + alt";
            if (e.Shift)
                str += " + shift";
            if (e.KeyCode.ToString() != "Menu" && e.KeyCode.ToString() != "ControlKey" && e.KeyCode.ToString() != "ShiftKey")
                MessageBox.Show(str, "누른 키");

        }
    }
}
