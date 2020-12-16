using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _18_8
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void addbtn_Click(object sender, EventArgs e)
        {
            string name = namebox.Text, tel = telbox.Text;
            string[] str = { name, tel };
            ListViewItem lvi = new ListViewItem(str);
            list.Items.Add(lvi);
            namebox.Text = "";
            telbox.Text = "";
        }

        private void delbtn_Click(object sender, EventArgs e)
        {
            int index = list.FocusedItem.Index;
            list.Items.RemoveAt(index);
            namebox.Text = "";
            telbox.Text = "";
        }

        private void list_DoubleClick(object sender, EventArgs e)
        {
            int index = list.FocusedItem.Index;
            namebox.Text = list.Items[index].SubItems[0].Text;
            telbox.Text = list.Items[index].SubItems[1].Text;
        }
    }
}
