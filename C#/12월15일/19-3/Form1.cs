using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _19_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void addbtn_Click(object sender, EventArgs e)
        {
            string name = textBox1.Text, tel = textBox2.Text;
            string[] str = { name, tel };
            ListViewItem lvi = new ListViewItem(str);
            listView1.Items.Add(lvi);
            textBox1.Text = "";
            textBox2.Text = "";
        }

        private void delbtn_Click(object sender, EventArgs e)
        {
            int index = listView1.FocusedItem.Index;
            listView1.Items.RemoveAt(index);
            textBox1.Text = "";
            textBox2.Text = "";
        }

        private void listView1_DoubleClick(object sender, EventArgs e)
        {
            int index = listView1.FocusedItem.Index;
            textBox1.Text = listView1.Items[index].SubItems[0].Text;
            textBox2.Text = listView1.Items[index].SubItems[1].Text;
        }
    }
}
