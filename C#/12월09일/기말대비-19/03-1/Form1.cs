using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _03_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void del_Click(object sender, EventArgs e)
        {
            int index = listView1.FocusedItem.Index;
            if (index < 0) { }
            else
            {
                listView1.Items.RemoveAt(index);
                namebox.Text = "";
                telbox.Text = "";
            }
        }

        private void add_Click(object sender, EventArgs e)
        {
            string name = namebox.Text, tel = telbox.Text;
            string[] str = { name, tel };
            ListViewItem lvi = new ListViewItem(str);
            listView1.Items.Add(lvi);
            namebox.Text = "";
            telbox.Text = "";
        }

        private void listView1_DoubleClick(object sender, EventArgs e)
        {
            int index = listView1.FocusedItem.Index;
            namebox.Text = listView1.Items[index].SubItems[0].Text;
            telbox.Text = listView1.Items[index].SubItems[1].Text;
        }
    }
}
