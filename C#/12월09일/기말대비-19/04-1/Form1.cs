using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _04_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void treeView1_AfterSelect(object sender, TreeViewEventArgs e)
        {
            textBox1.Text = e.Node.Text;
            if (e.Node.Parent != null)
                textBox2.Text = e.Node.Parent.Text;
            if (e.Node.PrevNode != null)
                textBox3.Text = e.Node.PrevNode.Text;
            if (e.Node.NextNode != null)
                textBox4.Text = e.Node.NextNode.Text;
            if(e.Node.Nodes != null)
            {
                listBox1.Items.Clear();
                foreach (TreeNode node in treeView1.SelectedNode.Nodes)
                    listBox1.Items.Add(node.Text);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            treeView1.ExpandAll();
        }
    }
}
