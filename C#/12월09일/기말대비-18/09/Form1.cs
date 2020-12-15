using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _09
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            treeView1.ExpandAll();
        }


        private void treeView1_AfterSelect(object sender, TreeViewEventArgs e)
        {
            textBox1.Text = e.Node.Text;
            if (treeView1.SelectedNode.Parent != null)
                textBox2.Text = e.Node.Parent.Text;
            if (treeView1.SelectedNode.PrevNode != null)
                textBox3.Text = e.Node.PrevNode.Text;
            if (treeView1.SelectedNode.NextNode != null)
                textBox4.Text = e.Node.NextNode.Text;
            if (treeView1.SelectedNode.Nodes != null)
            {
                listBox1.Items.Clear();
                foreach (TreeNode node in treeView1.SelectedNode.Nodes)
                    listBox1.Items.Add(node.Text);
            }
        }
    }
}