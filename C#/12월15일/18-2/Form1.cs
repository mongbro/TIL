using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _18_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            listBox1.Items.Add("Button");
            listBox1.Items.Add("CheckBox");
            listBox1.Items.Add("RadioButton");
            listBox1.Items.Add("Label");
            comboBox1.Items.Add("LinkedLabel");
            comboBox1.Items.Add("TextBox");
            comboBox1.Items.Add("ListBox");
            comboBox1.Items.Add("ComboBox");
        }

        private void toright_Click(object sender, EventArgs e)
        {
            comboBox1.Items.Add(listBox1.SelectedItem);
            listBox1.Items.RemoveAt(listBox1.SelectedIndex);            
        }

        private void toleft_Click(object sender, EventArgs e)
        {
            listBox1.Items.Add(comboBox1.SelectedItem);
            comboBox1.Items.RemoveAt(comboBox1.SelectedIndex);
        }
    }
}
