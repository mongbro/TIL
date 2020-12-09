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

        private void add_Click(object sender, EventArgs e)
        {
            string name = namebox.Text;
            string tel = telbox.Text;
            string[] str = new string[] { name, tel };
            ListViewItem lvi = new ListViewItem(str);
            listview.Items.Add(lvi);
            namebox.Text = "";
            telbox.Text = "";
        }

        private void del_Click(object sender, EventArgs e)
        {
            if(listview.SelectedItems.Count > 0)
            {
                int index = listview.FocusedItem.Index;
                listview.Items.RemoveAt(index);
            }
            namebox.Text = "";
            telbox.Text = "";
        }

        private void listview_DoubleClick(object sender, EventArgs e)
        {
            int index = listview.FocusedItem.Index;
            namebox.Text = listview.Items[index].SubItems[0].Text;
            telbox.Text = listview.Items[index].SubItems[1].Text;
        }
    }
}
