using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _05
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void print_Click(object sender, EventArgs e)
        {
            Boolean check = true;
            textBox1.Text = "";
            if (namebox.Text == "" || agebox.Text == "")
            {
                MessageBox.Show("이름, 나이를 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
                check = false;
            }
            if (year.SelectedItem == null || month.SelectedItem == null || date.SelectedItem == null)
            {
                MessageBox.Show("생년월일을 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
                check = false;
            }
            if (!male.Checked && !female.Checked)
            {
                MessageBox.Show("성별을 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
                check = false;
            }
            if(check == true)
            {
                textBox1.Text += "이름 : " + namebox.Text + "\r\n";
                textBox1.Text += "나이 : " + agebox.Text + "\r\n";
                if (male.Checked)
                    textBox1.Text += "성별 : 남자\r\n";
                else
                    textBox1.Text += "성별 : 여자\r\n";
                textBox1.Text += "생년월일 : " + year.Text + "년 " + month.Text + "월 " + date.Text + "일\r\n";
                textBox1.Text += "취미 : ";
                if (sport.Checked)
                    textBox1.Text += "운동 ";
                if (readbook.Checked)
                    textBox1.Text += "독서 ";
                if (game.Checked)
                    textBox1.Text += "게임 ";
                if (movie.Checked)
                    textBox1.Text += "영화 ";
                textBox1.Text += "\r\n";
            }
            
        }

        private void del_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            namebox.Text = "";
            agebox.Text = "";
            year.SelectedItem = null;
            month.SelectedItem = null;
            date.SelectedItem = null;
            if (male.Checked)
                male.Checked = false;
            else
                female.Checked = false;
            if (sport.Checked)
                sport.Checked = false;
            if (readbook.Checked)
                readbook.Checked = false;
            if (game.Checked)
                game.Checked = false;
            if (movie.Checked)
                movie.Checked = false;
        }

        private void exit_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            for (int i = 2000; i < 2020; i++)
                year.Items.Add(i);
            for (int i = 1; i < 13; i++)
                month.Items.Add(i);
            for (int i = 1; i < 32; i++)
                date.Items.Add(i);
        }
    }
}
