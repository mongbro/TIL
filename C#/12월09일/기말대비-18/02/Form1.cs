using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void toleft_Click(object sender, EventArgs e)
        {
            int index = comboBox1.SelectedIndex;
            listBox1.Items.Add(comboBox1.SelectedItem);
            comboBox1.Items.RemoveAt(index);
        }

        private void toright_Click(object sender, EventArgs e)
        {
            int index = listBox1.SelectedIndex;
            comboBox1.Items.Add(listBox1.SelectedItem);
            listBox1.Items.RemoveAt(index);
        }
    }
}
