using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _07
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

            if (e.KeyCode.ToString() != "ControlKey" && e.KeyCode.ToString() != "Menu" && e.KeyCode.ToString() != "ShiftKey")
                str += e.KeyCode;
            if (e.Alt)
                str += " + Alt";
            if (e.Control)
                str += " + Ctrl";
            if (e.Shift)
                str += " + Shift";

            if (e.KeyCode.ToString() != "ControlKey" && e.KeyCode.ToString() != "Menu" && e.KeyCode.ToString() != "ShiftKey")
                MessageBox.Show(str);
        }
    }
}
